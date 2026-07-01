// Most Frequent Element

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 2, 3, 4, 3, 2};
    map<int, int> freq;
    for(int x : arr) freq[x]++;
    
    int maxFreq = 0, element = -1;
    for(auto const& [val, count] : freq) {
        if(count > maxFreq) {
            maxFreq = count;
            element = val;
        }
    }
    cout << "Most frequent: " << element << " (count: " << maxFreq << ")";
    return 0;
}