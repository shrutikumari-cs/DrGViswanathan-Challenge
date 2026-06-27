#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> charCount;

        // Count characters in magazine
        for (char c : magazine) {
            charCount[c]++;
        }

        // Check if ransomNote can be constructed
        for (char c : ransomNote) {
            if (charCount[c] <= 0) {
                return false;
            }
            charCount[c]--;
        }
        return true;
    }
};

int main() {
    Solution sol;

    // Test cases
    string r1 = "a", m1 = "b";
    string r2 = "aa", m2 = "ab";
    string r3 = "aa", m3 = "aab";

    cout << "Test 1: ransomNote = \"" << r1 << "\", magazine = \"" << m1 << "\" -> "
         << (sol.canConstruct(r1, m1)? "true" : "false") << endl;
    cout << "Test 2: ransomNote = \"" << r2 << "\", magazine = \"" << m2 << "\" -> "
         << (sol.canConstruct(r2, m2)? "true" : "false") << endl;
    cout << "Test 3: ransomNote = \"" << r3 << "\", magazine = \"" << m3 << "\" -> "
         << (sol.canConstruct(r3, m3)? "true" : "false") << endl;

    // User input
    string ransomNote, magazine;
    cout << "\nEnter ransomNote: ";
    cin >> ransomNote;
    cout << "Enter magazine: ";
    cin >> magazine;
    cout << "Result: " << (sol.canConstruct(ransomNote, magazine)? "Can be constructed" : "Cannot be constructed") << endl;

    return 0;
}