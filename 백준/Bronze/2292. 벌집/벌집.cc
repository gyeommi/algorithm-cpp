#include <iostream>

using namespace std;

int main()
{
	int n, result = 0;
	cin >> n;

	for (int i = 2; i <= n; result++)
		i += 6 * result;
	if (n == 1)
		result = 1;
	cout << result;

	return 0;
}