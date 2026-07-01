// Transpose of 3x3 Matrix

#include <iostream>
using namespace std;
int main() {
    int mat[3][3];
    cout << "Enter 9 elements (3x3): ";
    for(int i=0; i<3; i++) for(int j=0; j<3; j++) cin >> mat[i][j];
    cout << "Transpose:\n";
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) cout << mat[j][i] << " ";
        cout << endl;
    }
    return 0;
}