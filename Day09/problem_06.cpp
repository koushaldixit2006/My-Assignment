// Multiplication of two 3x3 Matrices

#include <iostream>
using namespace std;
int main() {
    int a[3][3], b[3][3], res[3][3] = {0};
    cout << "Enter 9 elements for matrix A: ";
    for(int i=0; i<3; i++) for(int j=0; j<3; j++) cin >> a[i][j];
    cout << "Enter 9 elements for matrix B: ";
    for(int i=0; i<3; i++) for(int j=0; j<3; j++) cin >> b[i][j];
    for(int i=0; i<3; i++) for(int j=0; j<3; j++) for(int k=0; k<3; k++) res[i][j] += a[i][k] * b[k][j];
    cout << "Result:\n";
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}