#include <stdio.h>

//enum stands for enumeration
//enum between keyword
//helps with readability 

enum Waveform {
    sine, square, sawtooth
};

//enum then enum name, inside function then keywords inside
int main(){
    enum Waveform wf = sine; //messy syntax, use typedef to rename this
    // same thing as variable declaration
    printf("%d\n", wf);
}