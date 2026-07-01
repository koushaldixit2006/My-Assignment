// Vehicle and Car (Abstract Class)

#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() = 0; // Pure virtual function
};

class Car : public Vehicle {
public:
    void start() { cout << "Car engine started!" << endl; }
};

int main() {
    Car c;
    c.start();
    return 0;
}