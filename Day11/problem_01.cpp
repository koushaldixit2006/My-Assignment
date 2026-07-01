// Frequency of Elements

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4};
    map<int, int> freq;
    
    for(int x : arr) freq[x]++;
    
    for(auto const& [val, count] : freq) {
        cout << val << " appears " << count << " times" << endl;
    }
    return 0;
}