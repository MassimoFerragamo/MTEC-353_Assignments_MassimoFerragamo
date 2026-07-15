#include <stdio.h>


enum Waveform {
    sine, square, sawtooth
};

//enum then enum name, inside function then keywords inside
int main(){
    enum Waveform wf = sawtooth; //messy syntax, use typedef to rename this
    // same thing as variable declaration

    //big use of enum is to rename numbers in switch
    switch(wf){
        case sine: 
            printf("Sine\n");
            break; 
        case square:
            printf("Square\n");
            break; 
        case sawtooth:
            printf("SawTooth\n");
            break; 
    }
}