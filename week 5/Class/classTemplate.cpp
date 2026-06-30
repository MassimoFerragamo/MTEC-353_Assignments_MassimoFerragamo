#include <iostream>

template<typename T>
class Pair{
    private: 
    T first, second; 
    public: 
    T getFirst() const{
        return first;
    }
    T getSecond() const{
        return second;
    }

    void setFirst(T f){
        first = f;
    }

    void setSecond(T f){
        second = f;
    }

    void swap(){
        T dummy = first; 
        first = second; 
        second = dummy;
    }

};

int main(){
    Pair<int> pairs; 
    pairs.setFirst(10); 
    pairs.setSecond(200); 
    pairs.swap(); 

    std::cout << pairs.getFirst() << " " << pairs.getSecond() << std::endl; 
};