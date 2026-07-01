// Employee class
#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    int id;

    Employee(string n, int i) {
        name = n;
        id = i;
    }

    void display() {
        cout << "Employee Name: " << name << ", ID: " << id << endl;
    }
};

int main() {
    Employee e1("Kaushal", 501);
    e1.display();
    return 0;
}