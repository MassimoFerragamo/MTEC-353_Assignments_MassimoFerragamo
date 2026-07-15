#include <iostream>
#include <cmath>

class MidiNote{
    private: 
        unsigned char pitch; 
        unsigned char velocity; 
        unsigned char channel; 
    public: 
        MidiNote(){ 
            pitch = 60; 
            velocity = 100; 
            channel = 1;
        }; // function that runs on object creation. 

        void play(){
            std::cout << "pitch: " << int(pitch) << std::endl;
        };
};

//okay I am understanding better now. 
/*
I am allowed to write
MidiNote(){ 
            pitch = 60; 
            velocity = 100; 
            channel = 1;
        };

because it's happening in the class. MidiNote::Midi note notation is just about scoping. 
I am allowed to modify the private here because it is still being written in the class, even if we use the encapsulation

*/


int main(){
    MidiNote note; 
    note.play();
}

