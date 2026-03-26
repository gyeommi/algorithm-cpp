#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    string cmd;
    queue<int> qu;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> cmd;

        if (cmd == "push") {
            cin >> x;
            qu.push(x);
        }
        else if (cmd == "pop") {
            if (qu.empty()) cout << -1 << '\n';
            else {
                cout << qu.front() << '\n';
                qu.pop();
            }
        }
        else if (cmd == "size") {
            cout << qu.size() << '\n';
        }
        else if (cmd == "empty") {
            cout << (qu.empty() ? 1 : 0) << '\n';
        }
        else if (cmd == "front") {
            if (qu.empty()) cout << -1 << '\n';
            else cout << qu.front() << '\n';
        }
        else if (cmd == "back") {
            if (qu.empty()) cout << -1 << '\n';
            else cout << qu.back() << '\n';
        }
    }

    return 0;
}