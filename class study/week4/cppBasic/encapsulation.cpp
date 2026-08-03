#include <iostream>
using namespace std;
typedef unsigned char val; 

// hide functionality away from the user. 
// encapsulation 

// everything under the word private it will not be available to the user 
// everything under public will be available to the user 

// if an attribute is private 
// different ways to typecast 

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
        void setNotes(val p, val v, val c){
            pitch = p; 
            velocity = v; 
            channel = c; 
        }
        int getVelocity(){
            return velocity; 
        }
        int getPitch(){
            return pitch; 
        }
        int getChannel(){
            return channel; 
        }

};

int main(){
    MIDINote note;
    
    note.setNotes(50, 40, 3);

    cout << "pitch: " << note.getPitch() << endl;
    cout << "velocity: " << note.getVelocity() << endl;
    cout << "channel: " << note.getChannel() << endl;
}



