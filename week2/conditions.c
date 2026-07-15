#include <stdio.h>

int main() {
   unsigned char midiNote = 127; 

   // operators || (or), && (and) 
   // 

    //with or 
    if (midiNote > 127 || midiNote < 0) {
        printf("midinote %d is out of range\n", midiNote);
    } else {
        printf("midinote %d is in the of range\n", midiNote);
    }    

    // with and
     if (midiNote <= 127 && midiNote <= 0) {
        printf("midinote %d is out of range\n", midiNote);
    } else {
       
}