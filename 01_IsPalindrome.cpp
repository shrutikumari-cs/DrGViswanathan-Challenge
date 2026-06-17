//Is Palindrome (Stack)

#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;

    while(n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    return original == reversed;
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    if(isPalindrome(num))
        cout << num << " is a palindrome";
    else
        cout << num << " is not a palindrome";

    return 0;
}
