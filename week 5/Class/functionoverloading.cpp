//two functions can have the same name but different paratemeters 

//you can have to functions with the same name and cpp understands which one you are using based on the data type fed into it 

#include <iostream>

int compare(const int &value1, const int &value2){
    if(value1 < value2) return - 1; 
    if(value2 < value2) return - 1; 
    return 0; 
};

int compare(const std::string &value1, const std::string &value2){
    if(value1 < value2) return - 1; 
    if(value2 < value1) return - 1; 
    return 0; 
};

int main(){
    std::cout<< "int: " << compare(1, 10) << std::endl; 
    std::cout<< "string: " << compare("Hello", "World") <<std::endl;
};