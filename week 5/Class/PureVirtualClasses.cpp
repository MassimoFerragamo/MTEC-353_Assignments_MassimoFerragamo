#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979323846;

class Shape {
    public: 
    virtual double area() =0;
};

class Circle : public Shape{
    private: 
    double radius;

    public: 
    Circle(double r): radius(r){}
    double area() override {
        return pow(radius, 2) * ::PI; 
    }
};

class Rectangle : public Shape{
    private: 
    double height;
    double width;

    public: 
    Rectangle(double hei, double wid): height(hei), width(wid){}
    double area() override {
        return height * width; 
    }
};

class Triangle: public Shape{
    private: 
    double height;
    double width;

    public: 
    Triangle(double hei, double wid): height(hei), width(wid){}
    double area() override {
        double area = height * width; 
        return area/2;
    }
};

int main(){
    Shape* c = new Circle(5);
    Shape* r = new Rectangle(5, 3);
    Shape* t = new Triangle(4, 3);

    cout << "area of the circle is: " << c-> area() << endl;
    cout << "area of the rectangle is: " << r-> area() << endl;
    cout << "area of the triangle is: " << t-> area() << endl;
}