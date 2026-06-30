#include <iostream>
#include <string>
using namespace std;


//i declare a template for datat types and the compiler will resolve the function for the correct data type
template<typename T>
int compare(const T &value1, const T &value2){
    if (value1< value2) return -1; 
    if (value2 < value1) return 1; 
    return 0;
}

int main() {
    string h("hello"), w("world"); 
    cout << compare<int>(10, 20) << endl; 
    cout << compare<string>(h, w) << endl; 
    cout << compare<double>(50.5, 50.6) << endl;
    return 0;
}