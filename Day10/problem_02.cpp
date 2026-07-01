// Unique Elements
#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    vector<int> arr = {10, 20, 10, 30, 20, 40};
    
    // Set mein insert karne se duplicates apne aap hat jaate hain
    set<int> unique_elements(arr.begin(), arr.end());
    
    cout << "Unique elements are: ";
    for(int val : unique_elements) {
        cout << val << " "; // Output: 10 20 30 40
    }
    
    return 0;
}