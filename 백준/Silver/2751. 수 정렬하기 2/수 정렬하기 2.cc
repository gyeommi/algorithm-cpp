#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, a;
    vector<int> arr;
    cin >> n;

    while (n) {
        cin >> a;
        arr.push_back(a);
        n--;
    }
    sort(arr.begin(), arr.end());

    for (int v : arr) cout << v << '\n';
}