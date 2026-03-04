#include <iostream>
using namespace std;

int main()
{
    int a, b, ra, rb;
    int max = 0, min = 0;
    cin >> a >> b;
    ra = a;
    rb = b;

    while (1)
    {
        int r = a % b;

        if (r == 0)
        {
            max = b;
            break;
        }
        a = b;
        b = r;
    }

    min = ra * rb / max;

    cout << max << "\n";
    cout << min << "\n";

    return 0;
}