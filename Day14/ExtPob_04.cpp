// Sum = $1 - x^2/2! + x^4/4! - x^6/6! + \dots$:


#include <iostream>
#include <cmath>
using namespace std;
double fact(int n) { return (n <= 1) ? 1 : n * fact(n - 1); }
int main() {
    int x, n; double sum = 0;
    cout << "Enter x and number of terms n: "; cin >> x >> n;
    for(int i = 0; i < n; i++) {
        double term = pow(x, 2*i) / fact(2*i);
        if(i % 2 == 0) sum += term; else sum -= term;
    }
    cout << "Sum = " << sum;
    return 0;
}