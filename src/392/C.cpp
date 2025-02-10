#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int d[n+1], r[n+1], t[n+1];
	for (int i = 1; i <= n; i++)
	{
		cin >> t[i];
	}

	for (int i = 1; i <= n; i++)
	{
		int m;
		cin >> m;
		d[m] = t[i];
		r[i] = m;
	}

	for (int i = 1; i <= n; i++)
	{
		cout << r[d[i]] << " ";
	}
	return 0;
}