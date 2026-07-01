// Student (Getter/Setter)

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
public:
    void setName(string n) { name = n; }
    string getName() { return name; }
};

int main() {
    Student s;
    string n;
    cout << "Enter name: "; cin >> n;
    s.setName(n);
    cout << "Student name is: " << s.getName() << endl;
    return 0;
}