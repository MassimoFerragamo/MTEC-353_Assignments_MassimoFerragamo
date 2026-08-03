#include <stdio.h>


int main(){
    int fahr;
    float cels;

    for(fahr = 0; fahr < 300; fahr = fahr + 20){
        cels = 5.0 * (fahr - 32)/9.0;
        printf("Fahrenheit: %u, Celsius: %.3f \n", fahr, cels);
    };
}