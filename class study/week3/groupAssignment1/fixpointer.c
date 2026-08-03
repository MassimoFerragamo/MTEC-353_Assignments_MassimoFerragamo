#include <stdio.h>


//swap functions

void swap(int a, int b);
void pswap(int *a, int *b);


void slow_down_tempo(int *bpm)
{
    *bpm = *bpm - 20;
}

int main(){

    int old_tempo = 120;

    // sample rate
    int *sample_rate, *bit_depth, *channels; //they are now all pointers

    //point to a literal 
    int literal = 4; 
    int *octave = &literal; 

    // Problem 3: Declaration without proper target
    float volume_level = 0.8;
    float *volume_ptr;
    volume_ptr = &volume_level;

    // Intended: Pointer should point to the variable
    slow_down_tempo(&old_tempo);

    printf("problem 1: pointers\n");
    printf("problem 2: %p\n", octave);
    printf("problem 3: %p\n", volume_ptr);
    printf("problem 4: %d\n", old_tempo);
    // pass by value can return the address of an array but cannot directly return multiple values 
}