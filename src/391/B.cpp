#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	string s[n], t[m];

	for (int i = 0; i < n; i++)
		cin >> s[i];
	for (int i = 0; i < m; i++)
		cin >> t[i];

	auto f = [&](int a1, int b1) {
		for (int a2 = 0; a2 < m; a2++)
			for (int b2 = 0; b2 < m; b2++)
				if (s[a1 + a2][b1 + b2] != t[a2][b2])
					return false;

		return true;
		};

	for (int i = 0; i + m <= n; i++)
	{
		for (int j = 0; j + m <= n; j++)
		{
			if (f(i, j))
			{
				cout << i + 1 << " " << j + 1;
				return 0;
			}
		}
	}
	return 0;
}