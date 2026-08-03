#include <JuceHeader.h>
using namespace std;

int main()
{
    //choose a file
    cout << "enter the path to the audion file: ";
    string sourceFilePath; 
    getline(cin, sourceFilePath); //use get line because it reads the full line where as Cin stops at a space 

    //where will the file output?
    cout << "Enter the path for the destination of the wave file: ";
    string destFilePath;
    getline(cin, destFilePath); 

    //creat a file object 
    juce::File sourceFile(sourceFilePath);
    juce::File destFile(destFilePath);

    //Create an audio format manager so that it can read a wav file
    juce::AudioFormatManager formatManager;
    formatManager.registerBasicFormats();

    //unique pointer for the reader
    unique_ptr<juce::AudioFormatReader> reader(formatManager.createReaderFor(sourceFile));

    if (reader)
    {
        juce::AudioBuffer<float> buffer(reader->numChannels, static_cast<int>(reader->lengthInSamples));

        reader->read(&buffer, 0, static_cast<int>(reader->lengthInSamples), 0, true, true);

        std::unique_ptr<juce::AudioFormatWriter> writer(formatManager.findFormatForFileExtension("wav")
                                              ->createWriterFor(new juce::FileOutputStream(destFile),
                                                                 reader->sampleRate,
                                                                 reader->numChannels,
                                                                 16,
                                                                 {},
                                                                 0));
        if (writer)
        {
            writer->writeFromAudioSampleBuffer(buffer, 0, buffer.getNumSamples());
        }
        else
        {
            std::cout << "Failed to create a writer for the destination file." << std::endl;
        }
    }
    else
    {
        std::cout << "Failed to read the source wave file." << std::endl;
    }
}


// /Users/massimo/Documents/GitHub/MTEC-353_Assignments_MassimoFerragamo/week6/02.ReadWriteAudioFile/build/sine.wav