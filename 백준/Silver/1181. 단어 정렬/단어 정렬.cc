#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(string a, string b) {
    if (a.length() == b.length())
        return a < b;
    return a.length() < b.length();
}

int main() {
    int n;
    string str;
    vector<string> arr;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str;
        arr.push_back(str);
    }

    sort(arr.begin(), arr.end(), cmp);

    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    for (string s : arr)
        cout << s << "\n";
}