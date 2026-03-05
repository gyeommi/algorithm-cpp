#include <iostream>
using namespace std;

int main()
{
    int n, k, p;
    int a = 1, b = 1;
    cin >> n >> k;
    p = k;

    for (int i = 0; i < k; i++)
    {
        a *= n;
        n--;

        b *= p;
        p--;
    }
    cout << a / b;

    return 0;
}