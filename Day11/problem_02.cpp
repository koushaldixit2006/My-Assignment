// Character Frequency

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string s = "programming";
    map<char, int> freq;
    
    for(char c : s) freq[c]++;
    
    for(auto const& [ch, count] : freq) {
        cout << ch << ": " << count << endl;
    }
    return 0;
}