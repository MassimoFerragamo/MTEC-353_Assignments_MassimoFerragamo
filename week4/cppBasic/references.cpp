#include <iostream>

// references do not require dereferencing 
// you can only reference once; 
// they still refer to the memory but a pointer is a variable that stores memory address 
// reference is just a new name
// syntax is more elegant 

void transpose(int &note, int semitones){
    note = note +  semitones;
};

void setVelocity(int *velocity, int newVel){
    if(velocity != nullptr){ //if velocity = null it will crash everything
        *velocity = newVel;
    }
}

int main(){
    int midiNote = 60; 
    int velocity = 100; 
    int channel = 1; 

    std::cout << "Original: " << midiNote << ", " << velocity << ", " << channel << std::endl;//you don't need to specify placeholder 
    // insert operator will do it for you

    transpose(midiNote, 12);

    setVelocity(&velocity, 127);
}