#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main() {
    int count = 50; 
    int arr[count]; 
    double amplitude = 5;
    int phase;
    float frequency;

    printf("Hello, what frequency? ");

    scanf("%f", &frequency); 

    frequency = ((float) frequency/44100.0) * PI;



    for (int i = 0; i < count; i++){
        phase = round(sin(i * frequency * 11) * amplitude); // I have accounted for visual aliasing here, otherwise this won't make for a compelling display
        // but the technical audio aliasing should still be right.
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