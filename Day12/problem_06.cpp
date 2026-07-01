// Box class 
#include <iostream>
using namespace std;
class Box {
public:
    int length;

    void setLength(int length) {
        // this->length = member variable
        // length = parameter
        this->length = length;
    }

    void display() {
        cout << "Length = " << length;
    }
};
int main() {
    Box b;
    b.setLength(20);
    b.display();
    return 0;
}