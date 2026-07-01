// First Non-Repeating Character

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string s = "swiss";
    map<char, int> freq;
    for(char c : s) freq[c]++;
    
    for(char c : s) {
        if(freq[c] == 1) {
            cout << "First non-repeating: " << c << endl;
            break;
        }
    }
    return 0;
}