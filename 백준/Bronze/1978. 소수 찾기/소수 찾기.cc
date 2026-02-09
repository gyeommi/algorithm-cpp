#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 0;
    int a, result = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        for (int j = 1; j <= a; j++)
        {
            if (a % j == 0)
            {
                cnt++;
            }
        }
        if (cnt == 2)
            result++;
        cnt = 0;
    }

    cout << result << "\n";

    return 0;
}