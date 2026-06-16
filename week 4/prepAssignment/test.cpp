#include <iostream>
using namespace std;

int x = 300;

namespace Math {
    int x = 240;
}

class MathClass {
    public: 
    static int x;
};

int MathClass::x = 140;

int main(){
    int x = 10;
    cout << "in this scope x = " << x << endl;
    cout << "in the Global scope x = " << ::x << endl;
    cout << "in the Math namespace x = " << Math::x << endl;
    cout << "in the MathClass class x = " << MathClass::x << endl;
    return 0;
}