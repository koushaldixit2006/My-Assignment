// Arrange n numbers in Ascending Order

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout << "Enter count: "; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    return 0;
}