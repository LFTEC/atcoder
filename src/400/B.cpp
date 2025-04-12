#include <bits/stdc++.h>
using namespace std;

long long calc(int n, int m)
{
	long long res = 1;
	while (m-->0)
	{
		res *= n;
	}
	return res;
}

int main()
{
	int n; int m;
	cin >> n >> m;
	long long ans = 0;
	for (int i = 0; i <= m; i++)
	{
		long long res = 0;
		if ((res = calc(n, i)) > 1e9)
		{
			cout << "inf";
			return 0;
		}

		ans += res;
		if (ans > 1e9)
		{
			cout << "inf";
			return 0;
		}
	}

	cout << ans;
	return 0;
}