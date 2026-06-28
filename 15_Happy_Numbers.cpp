#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int getNext(int n) {
        int totalSum = 0;
        while (n > 0) {
            int digit = n % 10;
            totalSum += digit * digit;
            n /= 10;
        }
        return totalSum;
    }

    bool isHappy(int n) {
        unordered_set<int> seen;
        
        while (n != 1 &&!seen.count(n)) {
            seen.insert(n);
            n = getNext(n);
        }
        return n == 1;
    }
};

int main() {
    Solution sol;

    // Test cases
    int test1 = 19; // true
    int test2 = 2; // false
    int test3 = 7; // true

    cout << "Test 1: " << test1 << " -> " << (sol.isHappy(test1)? "true" : "false") << endl;
    cout << "Test 2: " << test2 << " -> " << (sol.isHappy(test2)? "true" : "false") << endl;
    cout << "Test 3: " << test3 << " -> " << (sol.isHappy(test3)? "true" : "false") << endl;

    // User input
    int num;
    cout << "\nEnter number to check: ";
    cin >> num;
    cout << "Result: " << (sol.isHappy(num)? "Happy Number" : "Not a Happy Number") << endl;

    return 0;
}