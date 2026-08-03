#include <stdio.h>

//symbolic constants are conventially written in uppercase
#define LOWER 0 
#define UPPER 300 
#define STEP 20


int main(){
    int fahr;
    float cels;

    for(fahr = LOWER; fahr < UPPER; fahr = fahr + STEP){
        cels = 5.0 * (fahr - 32)/9.0;
        printf("Fahrenheit: %u, Celsius: %.3f \n", fahr, cels);
    };
}