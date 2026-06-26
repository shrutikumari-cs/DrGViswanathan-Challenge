//Valid Palindrome

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            // Skip non-alphanumeric from left
            while (left < right &&!isalnum(s[left])) {
                left++;
            }
            // Skip non-alphanumeric from right
            while (left < right &&!isalnum(s[right])) {
                right--;
            }
            // Compare lowercase characters
            if (tolower(s[left])!= tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

int main() {
    Solution sol;

    // Test cases
    string test1 = "A man, a plan, a canal: Panama";
    string test2 = "race a car";
    string test3 = " ";

    cout << "Test 1: " << test1 << " -> " << (sol.isPalindrome(test1)? "true" : "false") << endl;
    cout << "Test 2: " << test2 << " -> " << (sol.isPalindrome(test2)? "true" : "false") << endl;
    cout << "Test 3: \"" << test3 << "\" -> " << (sol.isPalindrome(test3)? "true" : "false") << endl;

    // User input
    string input;
    cout << "\nEnter string to check: ";
    getline(cin, input);
    cout << "Result: " << (sol.isPalindrome(input)? "Valid Palindrome" : "Not a Palindrome") << endl;

    return 0;
}
