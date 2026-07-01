// Student Record Using Pair

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Vector of pairs: {Name, Marks}
    vector<pair<string, int>> students = {{"Alice", 90}, {"Bob", 85}, {"Charlie", 92}};
    
    for(auto const& student : students) {
        cout << "Name: " << student.first << ", Marks: " << student.second << endl;
    }
    return 0;
}