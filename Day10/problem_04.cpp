// Union of Arrays

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {3, 4, 5};
    
    set<int> unionSet(a.begin(), a.end());
    unionSet.insert(b.begin(), b.end()); // Set automatically handles duplicates
    
    for(int x : unionSet) cout << x << " ";
    return 0;
}