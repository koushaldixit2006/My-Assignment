// Roots of a quadratic equation

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, b, c, d, root1, root2;
    cout << "Enter coefficients a, b and c: ";
     cin >> a >> b >> c;
    d = b*b - 4*a*c;
    if(d >= 0) {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are: " << root1 << " and " << root2;
    } else cout << "Roots are complex.";
    return 0;
}