#include <iostream>

using namespace std;

int main()
{
	//n장 카드, 숫자 m 외침 => n장 카드 중 3장 카드 고르기 -> 카드 합 < m, m과 최대한 가깝게
	
	int n, m;
	cin >> n >> m;
	int arr[100];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int card, maxS = 0;

	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				card = arr[i] + arr[j] + arr[k];
				if (card <= m && maxS < card)
					maxS = card;
			}
		}
	}

	cout << maxS;

	return 0;
}