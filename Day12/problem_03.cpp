// Rectangle Area Calculation
#include <iostream>
using namespace std;
class Rectangle {
public:
    int length, width;

    void setData(int l, int w) {
        length = l;
        width = w;
    }

    int area() {
        return length * width;
    }
};
int main() {
    Rectangle r;
    r.setData(10, 5);
    cout << "Area = " << r.area();
    return 0;
}