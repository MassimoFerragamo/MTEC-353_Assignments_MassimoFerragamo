#include <iostream>

//all the methods and functions from one class to the next 

class Guitar{
    protected: 
        int numStrings;
        std::string stringType; 

    private:

    public: 
    void play(){
        std::cout << "Play!" << std::endl;
    }
};


class ElectricGuitar : public Guitar{
    public: 
    ElectricGuitar(){
        numStrings = 8; 
        stringType = "Steel";
    }
    void getNumStrings(){
        std::cout << "string num: " << int(numStrings) << std::endl;
    }
};

int main(){
    ElectricGuitar eGuitar; 
    eGuitar.getNumStrings();
}