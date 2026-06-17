#include <iostream>
#include <cmath>

// look at the struct with a name 
class MIDINote {
    private: 
        unsigned char pitch; 
        unsigned char velocity; 
        unsigned char channel;

    public: 
        MIDINote();

        MIDINote( //constructor is the function that gets automatically called when we create and object. 
            unsigned char pitch,
            unsigned char velocity,
            unsigned char channel
        ); 

        ~MIDINote(); //destructor, it will automatically generated for you. 

        float getFreq(); 
        float getAmp(); 
};


MIDINote::~MIDINote(){
    //mostly most things related to memory management are in here. 
    // these days people try not to deal with memory management. 
    // we are not doing any memory management. 
    // we don't even need it here. 
}

MIDINote::MIDINote(){
    pitch = 60; 
    velocity = 127; 
    channel = 1; 
}

//MIDINote::MIDINote(unsigned char pitch, unsigned char velocity, unsigned char channel):pitch(pitch), velocity(velocity), channel(channel){}

//or 

MIDINote::MIDINote(unsigned char pitch, unsigned char velocity, unsigned char channel){
    this -> pitch = pitch; 
    this -> velocity = velocity; 
    this -> channel = channel; 
}

float getFreq(unsigned char pitch){
    return 440.0f * std::pow(2.0f, ((pitch - 69)/12.0f));
};

float getAmp(unsigned char velocity){
    return velocity/ 127.0f; 
};

int main(){
    MIDINote note(69, 100, 1); 

    std::cout << note.getFreq() << "Hz" << std::endl; 
    std::cout << note.getAmp() << "Hz" << std::endl; 

}