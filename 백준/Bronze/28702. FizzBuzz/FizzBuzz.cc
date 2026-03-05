#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str[3];

    for (int i = 0; i < 3; i++)
        cin >> str[i];

    for(int i=0; i<3; i++)
    {
        if (str[i][0] == 'F' || str[i][0] == 'B')
            continue;
        int num = stoi(str[i]) + 3 - i;
        if (num % 3 && num % 5)
            cout << num;
        else
        {
            if (num % 3 == 0)
                cout << "Fizz";
            if (num % 5 == 0)
                cout << "Buzz";
        }
        break;
    }
    return 0;
}