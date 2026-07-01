// Shape and Rectangle (Function Overriding)

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void display() { cout << "Base Shape" << endl; }
};

class Rectangle : public Shape {
public:
    void display() override { cout << "Rectangle Class" << endl; }
};

int main() {
    Shape* s;
    Rectangle r;
    s = &r;
    s->display();
    return 0;
}