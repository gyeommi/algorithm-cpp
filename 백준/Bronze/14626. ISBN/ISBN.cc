#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    cin >> num;

    int sum = 0;
    int pos = -1;

    for (int i = 0; i < 13; i++) {
        if (num[i] == '*') {
            pos = i;
            continue;
        }

        int digit = num[i] - '0';

        if (i % 2 == 0)
            sum += digit;
        else
            sum += digit * 3;
    }

    for (int d = 0; d <= 9; d++) {
        int temp = sum;

        if (pos % 2 == 0)
            temp += d;
        else
            temp += d * 3;

        if (temp % 10 == 0) {
            cout << d;
            break;
        }
    }
}