// Calculator (Function Overloading)

#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) { return a + b; }
    float add(float a, float b) { return a + b; }
};

int main() {
    Calculator calc;
    int i1, i2;
    float f1, f2;
    cout << "Enter 2 integers: "; cin >> i1 >> i2;
    cout << "Sum: " << calc.add(i1, i2) << endl;
    cout << "Enter 2 floats: "; cin >> f1 >> f2;
    cout << "Sum: " << calc.add(f1, f2) << endl;
    return 0;
}