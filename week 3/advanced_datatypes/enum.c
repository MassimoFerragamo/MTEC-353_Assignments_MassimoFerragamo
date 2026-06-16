#include <stdio.h>

//enum stands for enumeration
//enum between keyword
//helps with readability 

// enum is useful because it lets you define a set of named integer constants 

typedef enum Waveform {
    sine, square, sawtooth, triangle, wt1 = 8, wt2, wt3 = 50, wt4, // you can define a number in here and then enum will continue counting up so wt4 is 51
} Waveform;


//enum then enum name, inside function then keywords inside
int main(){
    Waveform wf = wt4; //messy syntax, use typedef to rename this
    // same thing as variable declaration
    printf("%d\n", wf);
}