#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> roman;

    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;

    int result = 0;

    for(int i = 0; i < s.length(); i++) {
        int current = roman[s[i]];

        if(i < s.length() - 1) {
            int next = roman[s[i+1]];

            if(current < next)
                result -= current;
            else
                result += current;
        }
        else {
            result += current;
        }
    }

    return result;
}

int main() {
    string s;
    cout << "Enter Roman Numeral: ";
    cin >> s;

    cout << romanToInt(s);

    return 0;
}
