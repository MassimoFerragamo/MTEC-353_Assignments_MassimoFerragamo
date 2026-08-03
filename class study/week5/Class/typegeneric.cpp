#include <iostream>

template<typename T>

int compare(const T &value1, const T &value2){
    if(value1 < value2) return - 1; 
    if(value2 < value2) return - 1; 
    return 0; 
};

int main(){
    std::cout<< "int: " << compare(1, 10) << std::endl; 
    std::cout<< "string: " << compare("Hello", "World") <<std::endl;

    std::cout<< "int: " << compare<int>(1, 10) << std::endl; 
    std::cout<< "string: " << compare<std::string>("Hello", "World") <<std::endl;
};