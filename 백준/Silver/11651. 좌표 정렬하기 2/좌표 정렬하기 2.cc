#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> v;

    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    stable_sort(v.begin(), v.end(), [](auto a, auto b) {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second < b.second;
    });

    for(auto p : v) {
        cout << p.first << " " << p.second << "\n";
    }
}