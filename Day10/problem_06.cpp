// Remove Duplicates

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    vector<int> arr = {1, 1, 2, 3, 3, 4};
    set<int> s(arr.begin(), arr.end());
    
    // Wapas vector mein daalna
    vector<int> result(s.begin(), s.end());
    
    for(int x : result) cout << x << " ";
    return 0;
}