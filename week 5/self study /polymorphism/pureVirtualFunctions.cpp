#include <iostream>
using namespace std;

class Guitar
{
    public: 
    virtual void play() =0;
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
    Guitar *guitar[3];

    ElectricGuitar electricGuitar; 
    AcousticGuitar acousticGuitar; 
    ClassicalGuitar classicalGUitar; 

    guitar[0] = &electricGuitar; 
    guitar[1] = &acousticGuitar; 
    guitar[2] = &classicalGUitar; 


    for(int i = 0; i < 3; i++){
        guitar[i]->play();
    }
    
    return 0;
}