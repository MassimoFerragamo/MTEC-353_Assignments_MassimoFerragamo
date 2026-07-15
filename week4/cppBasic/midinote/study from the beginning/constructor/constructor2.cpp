//let's look at a different syntax

#include <iostream>

using namespace std; 

class MIDINote{
    private: 
        unsigned char pitch; 
        unsigned char velocity; 
        unsigned char channel; 

    public: 
        MIDINote(); 
        void play();
}; 

MIDINote::MIDINote(){
    pitch = 69; 
    velocity = 100; 
    channel = 1; 
};

void MIDINote::play(){
    cout << "pitch: " << int(pitch) << endl; 
}





int main(){
    MIDINote note; 

    note.play();
}