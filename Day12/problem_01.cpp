// Student class
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    float marks;

    void display() {
        cout << "Name: " << name << ", Roll No: " << rollNo << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Kaushal";
    s1.rollNo = 101;
    s1.marks = 95.5;
    s1.display();
    return 0;
}