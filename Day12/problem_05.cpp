// Car class with static member
#include <iostream>
using namespace std;
class Car {
public:
    static int count;

    Car() {
        count++; // Each new object increments
    }
};
int Car::count = 0; // Define outside class

int main() {
    Car c1, c2, c3;
    cout << "Total Objects = "
         << Car::count;
    return 0;
}