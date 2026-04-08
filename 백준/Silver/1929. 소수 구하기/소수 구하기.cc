#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    for (int i = m; i <= n; i++) {
        if (i < 2) continue;

        bool isPrime = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << '\n';
        }
    }
    return 0;
}