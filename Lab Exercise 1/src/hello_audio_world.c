#include <stdio.h>
#include <math.h>

int main() {
    int count = 40; 
    double arr[count]; 
    double amplitude = 10;
    int phase;
    float frequency = 0.5; 

    for (int i = 0; i < count; i++){
        phase = round(sin(i * frequency) * amplitude);
        printf("%d \n", phase);
    }
}