#include <iostream>
using namespace std;

class MIDINote {
    private: 
        unsigned char pitch; 
        unsigned char velocity; 
        unsigned char channel;

    public: 
        MIDINote(){ // i use this one so that when I don't specify anything I get values
            pitch = 60; 
            velocity = 100; 
            channel = 1;
        }
        MIDINote( //if I call some values it will automaticall assign it
            unsigned char pitch, 
            unsigned char velocity,
            unsigned char channel
            ):
            pitch(pitch), velocity(velocity), channel(channel)
        {}
        void play(){
            cout << "pitch: " << int(pitch) << endl;
            cout << "velocity: " << int(velocity) << endl;
            cout << "channel: " << int(channel) << endl;
        }
};

int main(){
    MIDINote note(50, 60, 1); 

    note.play();
}



