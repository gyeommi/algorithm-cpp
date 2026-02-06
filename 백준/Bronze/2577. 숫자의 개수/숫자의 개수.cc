#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, c, v;
    int count[10] = {};
    
    cin >> a >> b >> c;
    v = a * b * c;

    string s = to_string(v);

    for (auto ch : s)
        count[ch - '0']++;

    for (auto n : count)
        cout << n << "\n";

    return 0;
}