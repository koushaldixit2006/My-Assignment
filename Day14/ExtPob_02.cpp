// Sum = $x + x^2/2! + x^3/3! + \dots + x^n/n!$:

#include <iostream>
#include <cmath>
using namespace std;
double fact(int n) { return (n <= 1) ? 1 : n * fact(n - 1); }
int main() {
    int x, n; double sum = 0;
    cout << "Enter x and n: "; cin >> x >> n;
    for(int i = 1; i <= n; i++) sum += pow(x, i) / fact(i);
    cout << "Sum = " << sum;
    return 0;
}