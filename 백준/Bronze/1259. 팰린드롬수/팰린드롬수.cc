#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    
    while (true)
    {
        cin >> s;
        bool palind = 1;
        int size = s.length();

        if (s == "0")
        {
            break;
        }

        for (int i = 0; i < size / 2; i++)
        {
            if (s[i] != s[size - 1 - i])
            {
                palind = 0;
            }
        }
        if(palind)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}