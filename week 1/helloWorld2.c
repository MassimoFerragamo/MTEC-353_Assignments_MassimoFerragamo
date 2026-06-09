// create a program that generates a one second long 440Hz sine wave and saves it as a .wav file
#include <stdio.h>
#include <stdlib.h>
#include <math.h>  
#include <stdint.h>

int main() {
    // Define parameters
    const int sampleRate = 44100; // Samples per second
    const double frequency = 440.0; // Frequency of the sine wave (A4)
    const double duration = 1.0; // Duration in seconds
    const int numSamples = (int)(sampleRate * duration); // Total number of samples

    // Create a buffer to hold the audio data
    int16_t* buffer = (int16_t*)malloc(numSamples * sizeof(int16_t));
    
    // Generate the sine wave
    for (int i = 0; i < numSamples; i++) {
        double t = (double)i / sampleRate; // Time in seconds
        buffer[i] = (int16_t)(32767 * sin(2 * M_PI * frequency * t)); // Scale to 16-bit range
    }

    // Open a file to write the .wav data
    FILE* file = fopen("sine_wave.wav", "wb");
    
    // Write the WAV file header
    fwrite("RIFF", 1, 4, file); // ChunkID
    uint32_t chunkSize = 36 + numSamples * sizeof(int16_t);
    fwrite(&chunkSize, 4, 1, file); // ChunkSize
    fwrite("WAVE", 1, 4, file); // Format

    // Write the fmt subchunk
    fwrite("fmt ", 1, 4, file); // SubchunkID
    uint32_t subchunkSize = 16;
    fwrite(&subchunkSize, 4, 1, file); // SubchunkSize
    uint16_t audioFormat = 1; // PCM
    fwrite(&audioFormat, 2, 1, file); // AudioFormat
    uint16_t numChannels = 1; // Mono
    fwrite(&numChannels, 2, 1, file); // NumChannels
    fwrite(&sampleRate, 4, 1, file); // SampleRate
    uint32_t byteRate = sampleRate * numChannels * sizeof(int16_t);
    fwrite(&byteRate, 4, 1, file); // ByteRate
    uint16_t blockAlign = numChannels * sizeof(int16_t);
    fwrite(&blockAlign, 2, 1, file); // BlockAlign
    uint16_t bitsPerSample = 16;
    fwrite(&bitsPerSample, 2, 1, file); // BitsPerSample

    // Write the data subchunk
    fwrite("data", 1, 4, file); // SubchunkID
    uint32_t dataChunkSize = numSamples * sizeof(int16_t);
    fwrite(&dataChunkSize, 4, 1, file); // SubchunkSize

    // Write the audio data
    fwrite(buffer, sizeof(int16_t), numSamples, file);

    // Close the file and free the buffer
    fclose(file);
    free(buffer);

    return 0;
}
