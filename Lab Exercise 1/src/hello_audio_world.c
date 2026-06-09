#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main() {
    int count = 50; 
    int arr[count]; 
    double amplitude = 5;
    int phase;
    float frequency = PI * 0.5; // PI * 1/2 is my nyquist and it's a period, so I need to calculate my 1/frequency to get the period
    // the nyquist frequency here represents 22050 (assuming my sample rate is 44100)
    // or in other words 22050/44100
    // with scanf I can query a frequency and calculate frequency/44100 and I will get my ratio
    // this is a good point to commit
    // I have all my variables in place and I just need to scan them and print them


    for (int i = 0; i < count; i++){
        phase = round(sin(i * frequency) * amplitude);
        arr[i] = phase;
    }

    for (int i = 0; i <= (amplitude * 2.0); i++){
        for (int j = 0; j <= count; j++ ){
            if(arr[j] + amplitude == i){
                printf("* "); 
            } else {
                printf("  "); 
            };
        }
        printf("\n");
    }
}