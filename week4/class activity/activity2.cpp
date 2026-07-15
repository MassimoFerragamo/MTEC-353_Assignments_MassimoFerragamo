#include <iostream>
#include <cmath>
using namespace std; 
typedef unsigned char n; 

class MidiChord{
    public: 
    typedef enum Quality{
            major, 
            minor, 
            diminished, 
            augmented
        } Quality;
    
    private: 

        n root; 
        n velocity; 
        n channel; 
        int noteCount;
        Quality quality;
        array<int, 3> notes;
    
    public: 
        MidiChord(); 
        MidiChord(n r, n v, n ch, int notCnt, Quality qual); 
        void playChord();  
        string buildTriad();
        float getFrequency(); 
        void qualityName(); 
};

MidiChord::MidiChord(){
    noteCount = 3;
    root = 60; 
    velocity = 100; 
    channel = 1; 
    quality = major;
}; 

MidiChord::MidiChord(n r, n v, n ch, int notCnt, Quality qual)
{
    this->root = r; 
    this->velocity = v; 
    this->channel = ch; 
    this->noteCount = notCnt; 
    this->quality = qual;
}; 

string MidiChord::buildTriad(){
    switch (quality)
    {
    case 0:
        notes = {int(root), int(root + 4), int(root + 7)};
        return "Major";
        break;
    case 1:
        notes = {root, root + 3, root + 7};
        return "Minor";
        break;
    case 2:
        notes = {root, root + 3, root + 6};
        return "Diminished";
        break;
    case 3:
        notes = {root, root + 4, root + 8};
        return "Augmented";
        break;
    }
}



void MidiChord::playChord(){
    string qual = buildTriad();

    cout<< "root: " << int(root) << endl;
    cout<< "third: " << notes[1] << endl;
    cout<< "fifth: " << notes[2] << endl;
    cout<< "quality: " << qual << endl;
    cout<< "velocity: " << int(velocity) << endl; 
    cout<< "channel: " << int(channel) << endl;
};

int main(){
    MidiChord chord(60, 100, 1, 3, MidiChord::minor);
    chord.playChord();
}