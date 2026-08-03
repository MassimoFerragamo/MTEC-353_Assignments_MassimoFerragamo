#include <iostream>
using namespace std;

//we have to functions with the same name that behave differently according to the data type fed in

// for every datatype it can become so much code!!! 

int compare(const int &value1, const int &value2) {
    if (value1 < value2) return -1; 
    if (value2 < value1) return 1;
    return 0;
}

int compare(const string &value1, const string &value2){
    if (value1 < value2) return -1; 
    if (value2 < value1) return 1;
    return 0;
}

int main() 
{
    cout << "int: " << compare(1, 2) << endl;
    cout << "String: " << compare("Hello", "World") << endl;
    return 0;
}