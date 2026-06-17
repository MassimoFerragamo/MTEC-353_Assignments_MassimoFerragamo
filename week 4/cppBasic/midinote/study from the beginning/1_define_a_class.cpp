#include <iostream>
#include <cmath>

class MidiNote
{
    private: 
        unsigned char pitch; 
        unsigned char velocity; 
        unsigned char channel; 
    public: 
        void play(); 
        void stop();
};

void MidiNote::play(){
     std::cout << "Playing pitch: " << int(pitch) << ", velocity: " 
    << int(velocity) << ", and channel: " << int(channel) << std::endl;
};

void MidiNote::stop()
{
  std::cout << "Stopping pitch: " << int(pitch) << ", velocity: " 
    << int(velocity) << ", and channel: " << int(channel) << std::endl;
};

int main()
{
  MidiNote note;

  note.play();
  note.stop();

  return 0;
}