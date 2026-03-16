#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string vps;
        stack<char> ps;
        cin >> vps;

        int j;

        for (j = 0; j < vps.size(); j++)
        {
            if (vps.at(j) == '(')
                ps.push('(');
            else
            {
                if (ps.empty())
                    break;
                ps.pop();
            }
        }

        if (j == vps.size() && ps.empty())
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}