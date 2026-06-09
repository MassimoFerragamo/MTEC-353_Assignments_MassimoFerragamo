#include <stdio.h> //standard IO library
#include <math.h> // math library needed for sin()
#define PI 3.14159265358979323846 //pi used to calculate nyquist 

int main() {
    int count = 50; //array size and iterration counter
    int arr[count]; //array containing sinewave values is created
    float amplitude; // amplitude variable
    int phase; //phase variable
    float frequency; // frequency variable


    // here is the interfacing section for the user to define the amplitude 
    printf("\nHello, what frequency? ");

    scanf("%f", &frequency); 

    printf("\nWhat volume in db? ");

    scanf("%f", &amplitude); 



    printf("\n \n \nWelcome to MTEC-353: Advanced Audio Programming! \n \n");
    printf("Sine Wave (%.1f Hz, volume: %.1f):\n \n", frequency, amplitude);





    frequency = ((float) frequency/44100.0) * PI; // this is the period of my waveform, how many cycles
    amplitude = powf(10, amplitude/20.0); // db to amplitude conversion; 

    //here I am calculating the amplitude values of all the samples in the waveform
    for (int i = 0; i < count; i++){ //iterrating over how many spots I have;
        phase = round(sin(i * frequency * 11) * 10 * amplitude) + 10; // I have accounted for visual aliasing here, otherwise this won't make for a compelling display
        // if I wanted to be fully correct I would not have multiplied the frequency * 11, this shifts my nyquist frequency. but otherwise 440 looks like less that half a period 
        // 440 is more likely to be entered than 3000, so I would rather display 440 and have 3000 alias.

        // if clipping
        if (phase > 20) {
            phase = 20.0; 
        } else if (phase < 0 ) {
            phase = 0.0; 
        } 
        arr[i] = phase;
    }

    //iterrate over every line and place * if it corresponds to a value of our sine array
    for (int i = 0; i <= 20.0; i++){
        for (int j = 0; j <= count; j++ ){
            if(arr[j] == i){
                printf("* "); 
            } else {
                printf("  "); 
            };
        }
        printf("\n");
    }
    printf("\n");
}