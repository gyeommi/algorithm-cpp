#include <iostream>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a;
    cin >> n;

    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> a;
        s.insert(a);
    }

    int m, b;
    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> b;
        cout << s.count(b) << '\n';
    }
}