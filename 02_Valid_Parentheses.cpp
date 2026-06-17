//Valid Parentheses (Stack)

#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for(char ch : s) {

        if(ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else {

            if(st.empty())
                return false;

            if(st.top() == '(' && ch == ')')
                st.pop();

            else if(st.top() == '{' && ch == '}')
                st.pop();

            else if(st.top() == '[' && ch == ']')
                st.pop();

            else
                return false;
        }
    }

    return st.empty();
}

int main() {

    string s;

    cout << "Enter brackets string: ";
    cin >> s;

    if(isValid(s))
        cout << "Valid Parentheses";
    else
        cout << "Invalid Parentheses";

    return 0;
}
