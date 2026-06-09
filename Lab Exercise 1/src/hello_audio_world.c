#include <stdio.h>
#include <math.h>

int main() {
    int count = 40; 
    int arr[count]; // I might not even need this actually, I can just iterrate over 10 lines?
    // I am gonna try with the array first and then try without 
    // maybe array is the most inexpensive because I calculate less
    double amplitude = 10;
    int phase;
    float frequency = 0.5; 

    for (int i = 0; i < count; i++){
        phase = round(sin(i * frequency) * amplitude);
        arr[i] = phase;
    }
    
}