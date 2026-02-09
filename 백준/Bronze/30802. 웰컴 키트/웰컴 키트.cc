#include <iostream>

using namespace std;

int main()
{
	int n; //참가자 수
	int size[6]; //티셔츠 사이즈별 사람 수
	int t, p; //티셔츠, 펜 묶음 수
	int cnt = 0;

	cin >> n;

	for (int i = 0; i < 6; i++)
	{
		cin >> size[i];
	}

	cin >> t >> p;

	for (int j = 0; j < 6; j++)
	{
		cnt += (size[j] / t + (size[j] % t > 0));
	}

	cout << cnt << "\n" << n / p << " " << n % p << "\n";

	return 0;
}