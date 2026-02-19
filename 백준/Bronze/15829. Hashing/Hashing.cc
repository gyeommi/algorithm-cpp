#include <iostream>
#include <string>
using namespace std;

int main()
{
    int l;
    string s;
    long long hash = 0, r = 1, m = 1234567891;

    cin >> l >> s;

    for (int i = 0; i < s.length(); i++)
    {
        hash += ((s[i] - 'a' + 1) * r) % m;
        hash %= m;
        r = (r * 31) % m;
    }
    
    cout << hash;

    return 0;
}