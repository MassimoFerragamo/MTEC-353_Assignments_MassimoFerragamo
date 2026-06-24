#include <iostream>
#include <string>

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
};

template <typename T>
class Smoother {
private:
    T previousValue;
public:
    Smoother(T initial) : previousValue(initial) {}  // BUG: What if T isn't numeric?
    
    T smooth(T newValue, float factor) {
        previousValue = previousValue * (1.0 - factor) + newValue * factor;
        return previousValue;
    }
};

template <typename T>
void printValue(T value) {
    std::cout << "Value: " << value << "\n";
};

int main() {

    // ERROR 1: Try to compile this
    std::cout << "Max: " << max<double>(10.0f, 20.5f) << "\n";  // What's wrong?
    
    // ERROR 2: Try to compile this
    Smoother<float> stringSmoother;
    std::cout << stringSmoother.smooth("hello", 0.5f) << "\n";  // What's wrong?
    
    // // ERROR 3: This compiles but gives wrong results
    // Smoother<int> intSmoother;
    // std::cout << "Smoothed: " << intSmoother.smooth(100, 0.8f) << "\n";  // Why is output weird?
    
    // // ERROR 4: Try to compile this
    // int arr[] = {1, 2, 3};
    // printValue(arr);  // What's wrong?
    
    return 0;
}