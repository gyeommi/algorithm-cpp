#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    while (true) {
        string str;
        getline(cin, str);

        if (str == ".") break;

        stack<char> st;
        bool isBalanced = true;

        for (char c : str) {
            if (c == '(' || c == '[') {
                st.push(c);
            }
            else if (c == ')') {
                if (!st.empty() && st.top() == '(') st.pop();
                else {
                    isBalanced = false;
                    break;
                }
            }
            else if (c == ']') {
                if (!st.empty() && st.top() == '[') st.pop();
                else {
                    isBalanced = false;
                    break;
                }
            }
        }

        if (!st.empty()) isBalanced = false;

        if (isBalanced) cout << "yes\n";
        else cout << "no\n";
    }
}