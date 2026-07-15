#include <stdio.h>

//MIDI notes remember note velocity channel


const int NOTES = 10;

// these are the elements we need in a midi note, pitch, velocity, channel
struct Note{
    unsigned char pitch;
    unsigned char velocity; 
    unsigned char channel; 
}; 

typedef struct Note Note; //we renamed struct note to Note

//now we create a stuct that contains 3 Note structs. so it's a nested struct
typedef struct Tricord{
    Note notes[3]; 
} Trichord; 


int main(){

    Trichord chord = {
    {{61, 127, 1}, 
    {63, 120, 1}, 
    {67, 100, 1}}
    };

    printf("pitch = %u\n", chord.notes[2].pitch);
    // this is now a nested struct
}