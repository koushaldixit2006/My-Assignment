// Sum = $x - x^3/3! + x^5/5! - x^7/7! + \dots$:

#include <iostream>
#include <cmath>
using namespace std;
double fact(int n) { return (n <= 1) ? 1 : n * fact(n - 1); }
int main() {
    int x, n; double sum = 0;
    cout << "Enter x and number of terms n: "; cin >> x >> n;
    for(int i = 0; i < n; i++) {
        double term = pow(x, 2*i + 1) / fact(2*i + 1);
        if(i % 2 == 0) sum += term; else sum -= term;
    }
    cout << "Sum = " << sum;
    return 0;
}