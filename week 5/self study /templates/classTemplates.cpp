#include <iostream>

template <typename T>
class Pair{

    private: // define variables first and second with a template data type
    T first, second;


    public: 
    
    void setFirst(const T &f) { //set first and second
        first = f;
    }

    void setSecond(const T &s) {
        second = s;
    }

    //return first and second
    T getFirst() const {
        return first;
    }

    T getSecond() const {
        return second;
    }

    //swap first and second
    void swap() {
        T tmp = first; 
        first = second; 
        second = tmp;
    }
}; 

int main(){
    Pair<int> pair; 
    pair.setFirst(400); 
    pair.setSecond(20);
    pair.swap();
    std::cout << pair.getFirst() << " " << pair.getSecond() << std::endl;
    return 0;
}