// Intersection of Arrays

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {3, 4, 5, 6};
    
    set<int> s(a.begin(), a.end());
    cout << "Intersection: ";
    for(int x : b) {
        if(s.count(x)) cout << x << " "; // Agar x set mein hai, toh common hai
    }
    return 0;
}