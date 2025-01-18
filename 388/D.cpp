#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int t[n],g[n];

	memset(t, 0, sizeof(t));
	memset(g, 0, sizeof(g));
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;

		a += i;
		a -= g[i];

		if (a >= n - i - 1)
		{
			a = a - (n - i - 1);
		}
		else
		{
			g[i + a + 1]++;
			a = 0;
		}

		if (i + 1 < n) g[i + 1] += g[i];

		cout << a << " ";
	}

	return 0;
}