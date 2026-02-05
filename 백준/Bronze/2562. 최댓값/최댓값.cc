#include <iostream>
using namespace std;

int main()
{
	int n[9];
	int max = -1, maxindex;
	for (int i = 0; i < 9; i++)
	{
		cin >> n[i];
	}
	for (int j = 0; j < 9; j++)
	{
		if (n[j] > max)
		{
			max = n[j];
			maxindex = j;
		}
	}

	cout << max << "\n";
	cout << maxindex + 1;

	return 0;
}