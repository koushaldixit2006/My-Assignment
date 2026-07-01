// Word Frequency

#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
    string text = "apple mango apple orange mango apple";
    stringstream ss(text);
    string word;
    map<string, int> freq;
    
    while(ss >> word) freq[word]++;
    
    for(auto const& [w, count] : freq) cout << w << ": " << count << endl;
    return 0;
}