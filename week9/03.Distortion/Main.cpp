/*
  ==============================================================================

    The template DAFx file.

  ==============================================================================
*/

#include <JuceHeader.h>

// Function prototypes
int readSoundFile (juce::AudioBuffer<float>* buffer);
int writeSoundFile (juce::AudioBuffer<float> buffer, float sampleRate);
void hardclip (juce::AudioBuffer<float> inBuffer, juce::AudioBuffer<float> *outBuffer);
void asymmetricSoftClip (juce::AudioBuffer<float> inBuffer, juce::AudioBuffer<float> *outBuffer);
void fuzz (juce::AudioBuffer<float> inBuffer, juce::AudioBuffer<float> *outBuffer);

// Constants
const float kGain =  100.0f;
const float kLevel = 0.5;

//==============================================================================
int main ()
{
    // Read the source file into a buffer for processing
    juce::AudioBuffer<float> inBuffer;
    float sampleRate = readSoundFile (&inBuffer);
    if (!sampleRate) return 1;

    // Create a buffer for processing audio data
    juce::AudioBuffer<float> outBuffer (inBuffer.getNumChannels(), inBuffer.getNumSamples());
    
    // Process the audio data
    hardclip (inBuffer, &outBuffer);
//    asymmetricSoftClip (inBuffer, &outBuffer);
//    fuzz (inBuffer, &outBuffer);
    
    // Write the processed audio data to a sound file
    if (writeSoundFile (outBuffer, sampleRate)) return 1;
}

void hardclip (juce::AudioBuffer<float> inBuffer, juce::AudioBuffer<float> *outBuffer)
{
    for (int sample = 0; sample < inBuffer.getNumSamples(); ++sample)
    {
        for (int channel = 0; channel < inBuffer.getNumChannels(); ++channel)
        {
            const float* channelReadData = inBuffer.getReadPointer (channel);
            float* channelWriteData = outBuffer->getWritePointer (channel);
            
            // Copy inBuffer to outBuffer with a gain
            channelWriteData[sample] = channelReadData[sample] * kGain;
            
            // Hard clip the signal
            if (channelWriteData[sample] > 1.0f)
            {
                channelWriteData[sample] = 1.0f; //Clip signal to 1
            }
            else if (channelWriteData[sample] < - 1.0f)
            {
                channelWriteData[sample] = -1.0; //Clip signal to -1
            }
            
            //Adjust volume
            channelWriteData[sample] *= kLevel;
        }
    }
}

void asymmetricSoftClip (juce::AudioBuffer<float> inBuffer, juce::AudioBuffer<float> *outBuffer)
{
    for (int sample = 0; sample < inBuffer.getNumSamples(); ++sample)
    {
        for (int channel = 0; channel < inBuffer.getNumChannels(); ++channel)
        {
            const float* channelReadData = inBuffer.getReadPointer (channel);
            float* channelWriteData = outBuffer->getWritePointer (channel);
            
            // Copy inBuffer to outBuffer with a gain
            channelWriteData[sample] = channelReadData[sample] * kGain;
            
            // Soft clip the signal
            if (channelWriteData[sample] >= 0.0f)
            {
                //Soft clipping with arctangent
                channelWriteData[sample] = std::atan(channelWriteData[sample]) / (M_PI / 2.0f);
            }
            else if (channelWriteData[sample] < 0.0f)
            {
                //Introduce asymmetry in negative signals
                channelWriteData[sample] = std::atan(channelWriteData[sample]) / (M_PI / 2.0f) * 0.1f;
            }
            
            //Adjust volume
            channelWriteData[sample] *= kLevel;
        }
    }
}

void fuzz (juce::AudioBuffer<float> inBuffer, juce::AudioBuffer<float> *outBuffer)
{
    for (int sample = 0; sample < inBuffer.getNumSamples(); ++sample)
    {
        for (int channel = 0; channel < inBuffer.getNumChannels(); ++channel)
        {
            const float* channelReadData = inBuffer.getReadPointer (channel);
            float* channelWriteData = outBuffer->getWritePointer (channel);
            
            // Copy inBuffer to outBuffer with a gain
            channelWriteData[sample] = std::fabs(channelReadData[sample]) * kGain;
            
            // Hard clip the signal
            if (channelWriteData[sample] > 1.0f)
            {
                channelWriteData[sample] = 1.0f;
            }
            
            //Adjust volume
            channelWriteData[sample] *= kLevel;
        }
    }
}

int readSoundFile (juce::AudioBuffer<float> *buffer)
{
    // Prompt for the input file path
    std::cout << "Enter the path to the wave file to process: ";
    std::string filePath;
    std::getline(std::cin, filePath);
    juce::File file(filePath);
    
    // Create an audio format manager and register basic formats (especially WAV)
    juce::AudioFormatManager formatManager;
    formatManager.registerBasicFormats();

    // Create a unique_ptr for the reader
    std::unique_ptr<juce::AudioFormatReader> reader(formatManager.createReaderFor(file));
    
    // Check if the reader was created
    if (reader)
    {
        // Set the size of buffer
        buffer->setSize(reader->numChannels, static_cast<int>(reader->lengthInSamples));
        
        // Read the samples from the first file into the buffer
        bool success = reader->read(buffer, 0, static_cast<int>(reader->lengthInSamples), 0, true, true);

        // Return the sample rate for this file if reading was successful
        if (success) return reader->sampleRate;
        
        std::cout << "Failed to copy samples into the buffer from the source wave file." << std::endl;
        return 0;
    }
    
    std::cout << "Failed to read the source wave file." << std::endl;
    return 0;
}

int writeSoundFile (juce::AudioBuffer<float> buffer, float sampleRate)
{
    // Prompt for the output file path
    std::cout << "Enter the path to the wave file to save: ";
    std::string filePath;
    std::getline(std::cin, filePath);
    juce::File file(filePath);
    
    // Create an audio format manager and register basic formats (especially WAV)
    juce::AudioFormatManager formatManager;
    formatManager.registerBasicFormats();
    
    // Create a unique_ptr for the writer (WAV format)
    std::unique_ptr<juce::AudioFormatWriter> writer(formatManager.findFormatForFileExtension("wav")
                                                    ->createWriterFor(new juce::FileOutputStream(file),
                                                                       sampleRate,
                                                                       buffer.getNumChannels(),
                                                                       16,
                                                                       {},
                                                                       0));
    // Check if the writer was created
    if (writer)
    {
        // Write the mixed samples to the output file
        bool success = writer->writeFromAudioSampleBuffer(buffer, 0, buffer.getNumSamples());
        if (success) return 0;
        
        std::cout << "Failed to write samples into the buffer to the destination wave file." << std::endl;
        return 1;
    }
    
    std::cout << "Failed to create a writer for the destination file." << std::endl;
    return 1;
}
