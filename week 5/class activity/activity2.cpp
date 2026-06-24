#include <iostream>
#include <cmath>


template <typename T>

float normalize(T value, T minVal, T maxVal) {
    return (value - minVal) / static_cast<float>(maxVal - minVal);
};

int main() {
    std::cout << "Velocity (64): " << normalize<int>(64, 0, 127) << "\n";
    std::cout << "CC (100): " << normalize<int>(100, 0, 127) << "\n";
    std::cout << "Pitch bend (4096): " << normalize<float>(4096.0f, -8192.0f, 8192.0f) << "\n";
    std::cout << "Custom range (50, 0-100): " << normalize(50, 0, 100) << "\n";
    
    //Edge case testing
    std::cout << "\nEdge cases:\n";
    std::cout << "Max velocity: " << normalize<int>(127, 0, 127) << " (should be 1.0)\n";
    std::cout << "Max pitch bend: " << normalize<float>( 8192.0f, -8192.0f, 8192.0f) << " (should be ~1.0)\n";
    
    return 0;
}