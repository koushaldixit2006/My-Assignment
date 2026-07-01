// Query Frequency Count

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 10, 30, 10};
    map<int, int> freq;
    for(int x : arr) freq[x]++;
    
    // Queries
    vector<int> queries = {10, 30, 50};
    for(int q : queries) {
        cout << "Frequency of " << q << " is: " << freq[q] << endl;
    }
    return 0;
}