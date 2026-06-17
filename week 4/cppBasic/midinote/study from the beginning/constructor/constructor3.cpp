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
                unsigned char channel);
        void play();
}; 

MIDINote::MIDINote(unsigned char noteNum, 
    unsigned char loud, unsigned char chan){
    this->pitch = noteNum; //assign note num to the private pitch when you create the object
    this->velocity = loud; 
    this->channel = chan; 
}

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