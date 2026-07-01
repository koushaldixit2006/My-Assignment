// Add all elements of 3x4 Matrix

#include <iostream>
using namespace std;
int main() {
    int mat[3][4], sum = 0;
    cout << "Enter 12 elements (3x4): ";
    for(int i=0; i<3; i++) for(int j=0; j<4; j++) { cin >> mat[i][j]; sum += mat[i][j]; }
    cout << "Sum: " << sum;
    return 0;
}