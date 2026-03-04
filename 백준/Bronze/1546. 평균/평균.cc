#include <iostream>
using namespace std;

int main()
{
    int n, m = 0;
    double curg[1000], sum = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> curg[i];

        if (curg[i] > m)
        {
            m = curg[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        sum += curg[i] / m * 100;
    }

    cout << sum / n;

    return 0;
}