#include <stdio.h>
#include "module.h"

int main(){
    char midi = 69; 
    float freq = 440.0f;

   printf("Base frequency is: %f\n", gBaseFreq);
   printf("midi2freq: %d -> %f\n", midi, midi2freq(midi));
   printf("freq2midi: %f -> %d\n", freq, freq2midi(freq));
}