// Count Distinct Elements

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    vector<int> arr = {10, 20, 10, 30, 20, 40};
    
    // Set mein daal kar uska size check kar lo
    set<int> s(arr.begin(), arr.end());
    
    cout << "Total distinct elements count: " << s.size(); // Output: 4
    
    return 0;
}