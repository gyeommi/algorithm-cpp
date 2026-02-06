#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int n = 0, result, cnt;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        result = 0, cnt = 1;
        for (int j = 0; j < s.length(); j++) {
			if (s[j] == 'O') result += cnt++;
			else if (s[j] == 'X') cnt = 1;
		}
        cout << result << '\n';
    }
    return 0;
}
