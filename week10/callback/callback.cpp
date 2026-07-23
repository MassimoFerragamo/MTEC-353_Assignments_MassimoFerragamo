#include <iostream>

// callback and caller functiond 

void callback(); //write function prototype for callback
void caller(void (*ptr)()); //write function prototype for caller

int main(){
    void (*ptr)() = &callback; //pointer for address of callback
    caller(NULL); //execute caller function with argument pointer 
    //print "caller function!\n"
    //execute callback function from within the caller
    //print callback function
}

void callback(){ //function def of callback
    std::cout << "callback functions! \n"; 
};

void caller(void (*ptr)()){ //function def of caller
    std::cout << "caller function!\n";
    (*ptr)();
};

//void (*ptr)() means execute function held at *ptr
// caller null will output print "caller function" and then nothing 

