#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

// Utility function to remove a string from a vector of strings
void removeElement(vector<string>& vec, string s) {
    auto it = find(vec.begin(), vec.end(), s);
    if (it != vec.end()) {
        vec.erase(it);
    }
}