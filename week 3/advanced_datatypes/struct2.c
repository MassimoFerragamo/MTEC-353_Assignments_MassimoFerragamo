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

    Note note = {61, 127, 1}; // this is an array of struct now 
    Note *pNote = &note; //we are using a pointer to the struct so the dot won't work 
    // you need the arrow
    
    pNote->pitch = 60; 
    pNote->velocity = 127; 
    pNote->channel = 1;
} //what if we need more than one note 