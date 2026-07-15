#include <iostream>
using namespace std;

//define a base class 
class Guitar
{
    public: 
    void play()
    {
        cout << "Play" << endl;
    }
};

class ElectricGuitar : public Guitar //inherits all of the attributes of Guitar
//Publicly inherits from Guitar
// Public Members Stay Public, protected stay protected 
// Private members are inherited but remain unaccessible directly. 
{ 
    public: 
    void play() // Overrides (or hides, since play() isn't virtual) the base class function
    {
        cout << "Electric GUitar Sound!!" << endl;
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


int main() 
// Create objects of each class and call their play() functions.
// Each object executes its own version of play().
{
    ElectricGuitar eguitar; 
    ClassicalGuitar cguitar; 
    AcousticGuitar aguitar;
    Guitar guitar; 
    guitar.play();
    eguitar.play(); 
    cguitar.play(); 
    aguitar.play();

    return 0;
}