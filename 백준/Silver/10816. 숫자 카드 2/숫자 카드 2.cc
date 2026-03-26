#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, v;
    unordered_map<int, int> mp;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v;
        mp[v]++;
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> v;
        cout << mp[v] << ' ';
    }

    return 0;
}