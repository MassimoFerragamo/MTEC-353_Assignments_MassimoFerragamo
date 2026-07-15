//let's look at a different syntax

#include <iostream>

using namespace std; 

class MIDINote{
    private: 
        unsigned char pitch; 
        unsigned char velocity; 
        unsigned char channel; 

    public: 
        MIDINote(
            unsigned char pitch, 
            unsigned char velocity, 
            unsigned char channel
            ):
            pitch(pitch), velocity(velocity), channel(channel)
            {};
        void play();
}; 


void MIDINote::play(){
    cout << "pitch: " << int(pitch) << endl; 
    cout << "velocty: " << int(velocity) << endl; 
    cout << "channel: " << int(channel) << endl; 
}

int main()
{
  MIDINote note(64, 100, 10);

  note.play();

  return 0;
}