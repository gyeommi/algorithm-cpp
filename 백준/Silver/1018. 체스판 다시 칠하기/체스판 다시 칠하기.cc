#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> arr;

    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
        arr.push_back(row);
    }

    int answer = 64;

    for (int i = 0; i <= n - 8; i++) {
        for (int j = 0; j <= m - 8; j++) {

            int count1 = 0;
            int count2 = 0;

            for (int x = 0; x < 8; x++) {
                for (int y = 0; y < 8; y++) {

                    if ((x + y) % 2 == 0) {
                        if (arr[i + x][j + y] != 'W') count1++;
                        if (arr[i + x][j + y] != 'B') count2++;
                    } else {
                        if (arr[i + x][j + y] != 'B') count1++;
                        if (arr[i + x][j + y] != 'W') count2++;
                    }
                }
            }

            answer = min(answer, min(count1, count2));
        }
    }

    cout << answer;
    return 0;
}