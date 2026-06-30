#include <iostream>
using namespace std;

class Guitar
{
    public: 
    virtual void play()
    {
        cout << "Play" << endl;
    }
};

class ElectricGuitar : public Guitar 
{ 
    public: 
    void play() 
    {
        cout << "Electric Guitar Sound!!" << endl;
    }
};

class AcousticGuitar : public Guitar
{
    public: 
    void play()
    {
        cout << "Acoutsic Guitar Sound!!" << endl;
    }
};


class ClassicalGuitar : public Guitar{
    public:
    void play()
    {
        cout << "Classical Guitar Sound!!" << endl;
    }
};


int main() {
    Guitar *guitar; 
    ElectricGuitar electricGuitar; 
    AcousticGuitar acousticGuitar; 
    ClassicalGuitar classicalGUitar; 

    guitar = &electricGuitar; 
    guitar ->play(); 
    
    guitar = &acousticGuitar; 
    guitar ->play(); 

    guitar = &classicalGUitar; 
    guitar-> play();
    return 0;
}