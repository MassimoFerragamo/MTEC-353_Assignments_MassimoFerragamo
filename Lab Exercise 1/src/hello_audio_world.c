#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main() {
    int count = 50; 
    int arr[count]; 
    float amplitude;
    int phase;
    float frequency;

    printf("\nHello, what frequency? ");

    scanf("%f", &frequency); 

    printf("\nWhat amplitude in db? ");

    scanf("%f", &amplitude); 

    printf("\n \n \nHello, Audio World! \n");

    frequency = ((float) frequency/44100.0) * PI;

    amplitude = powf(10, amplitude/20.0);



    for (int i = 0; i < count; i++){
        phase = round(sin(i * frequency * 11) * 10 * amplitude) + 10; // I have accounted for visual aliasing here, otherwise this won't make for a compelling display
        // but the technical audio aliasing should still be right.
        if (phase > 20) {
            phase = 20.0; 
        } else if (phase < 0 ) {
            phase = 0.0; 
        } 
        arr[i] = phase;
    }

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
}