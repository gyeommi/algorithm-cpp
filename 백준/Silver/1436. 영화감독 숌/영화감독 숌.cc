#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, count = 0;
    int num = 666;

    cin >> n;

    while (true) {
        if (to_string(num).find("666") != string::npos) {
            count++;
        }

        if (count == n) {
            cout << num;
            break;
        }

        num++;
    }
}