#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    string cmd;
    stack<int> st;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> cmd;

        if (cmd == "push") {
            cin >> x;
            st.push(x);
        }
        else if (cmd == "pop") {
            if (st.empty()) cout << -1 << '\n';
            else {
                cout << st.top() << '\n';
                st.pop();
            }
        }
        else if (cmd == "size") {
            cout << st.size() << '\n';
        }
        else if (cmd == "empty") {
            cout << (st.empty() ? 1 : 0) << '\n';
        }
        else if (cmd == "top") {
            if (st.empty()) cout << -1 << '\n';
            else cout << st.top() << '\n';
        }
    }

    return 0;
}