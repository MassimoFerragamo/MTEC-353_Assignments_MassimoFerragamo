// understand fundamental differences between Python/Js/C

//why 
// dsp algorithms are prototyped in python; 
// c gets weird with syntax
// after you dsp in python you then implement in C 

#include <stdio.h> 

int tempo = 128; 

float period(int bpm){
    int ms_per_minute = 60; 
    float period = (float) ms_per_minute * 1000 / bpm; 
    return period; 
}

float frequency(int bpm){
    return (float) bpm/60; 
}

int main(){
    float x = period(tempo);
    float y = frequency(tempo);
    printf("period is %f ms\n", x);
    printf("frequency is %f per second\n", y);
}

