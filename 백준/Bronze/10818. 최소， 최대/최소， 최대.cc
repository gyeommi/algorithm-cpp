#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, v;
    cin >> n;

    int min = 1000001;
    int max = -1000001;

    for (int i = 0; i < n; i++)
    {
        cin >> v;
        if (v < min)
        {
            min = v;
        }
        if (v > max)
        {
            max = v;
        }
    }
    cout << min << " " << max;

    return 0;
}