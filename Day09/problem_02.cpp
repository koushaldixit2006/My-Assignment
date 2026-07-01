// Binary to Decimal


#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long n;
    int dec = 0, i = 0, rem;
    cout << "Enter binary number: "; cin >> n;
    while(n != 0) { rem = n % 10; n /= 10; dec += rem * pow(2, i); i++; }
    cout << "Decimal: " << dec;
    return 0;
}