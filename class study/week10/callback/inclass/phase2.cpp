#include <iostream>



void processEffect(float sample, int bufferSize);
void caller(void (*ptr)(float, int), float sample, int bufferSize);

int main() {
    void (*ptr)(float, int) = &processEffect;

    caller(ptr, 3.0f, 44100);
}

void processEffect(float sample, int bufferSize){ 
    std::cout << "callback functions! \n"; 
};

void caller(void (*ptr)(float, int), float sample, int bufferSize){ 
    std::cout << "caller function!\n";
    (*ptr)(sample, bufferSize);
};


