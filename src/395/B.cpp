#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	char s[n][n];
	for (int i = 1; i <= n; i++)
	{
		int j = n + 1 - i;
		if (i > j) break;

		for (int p = i; p <= j; p++)
		{
			for (int q = i; q <= j; q++)
			{
				s[p - 1][q - 1] = i % 2 == 1 ? '#' : '.';
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << s[i][j];
		}
		cout << endl;
	}

	return 0;
}