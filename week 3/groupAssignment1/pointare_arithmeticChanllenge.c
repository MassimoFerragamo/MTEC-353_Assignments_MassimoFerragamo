#include <stdio.h>



void find_peak_broken(float *samples, int size)
{
    float *ptr = samples;
    float max = 0.0;
    for (int i = 0; i < size; i++) //this is not really a pointer issue it's just a for loop issue
    {
        if (*ptr > max)
            max = *ptr;
        ptr++;
    }
}

// Problem B: Wrong pointer increment
void copy_left_to_right_broken(float *stereo, int frames)
{
    float *left = stereo;
    float *right = stereo + 1;
    for (int i = 0; i < frames; i++)
    {
        *right = *left;
        left++;
        right++;
    }
}

// Problem C: Pointer boundary confusion
void reverse_audio_broken(float *start, int size)
{
    float *end = start + (size - 1);
    while (start < end)
    {
        // swap logic here
        start++;
        end--;
    }
}

int main(){
    
}