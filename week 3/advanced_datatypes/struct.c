#include <stdio.h>

//MIDI notes remember note velocity channel


const int NOTES = 10; 

struct Note{
    unsigned char pitch;
    unsigned char velocity; 
    unsigned char channel; 
}; //you can use typedef here again

// even easier use of typedef 
typedef struct Note Note;

int main(){

    Note notes[10]; // this is an array of struct now 
    
    for (int i = 0; i < 10; i++){
        notes[i].pitch = 60; 
        notes[i].velocity = 127; 
        notes[i].channel = 1;
        printf("Pitch: %d, Velocity: %d, Channel: %d\n", notes[i].pitch, notes[i].velocity, notes[i].channel);
    }

    notes[9] = (struct Note){67, 127, 1}; //this also changes the struct you don't need all of that iterration
     notes[9] = (Note){67, 127, 1};

} //what if we need more than one note 
