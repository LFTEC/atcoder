#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int d[n];

	for (int i = 1; i < n; i++)
	{
		cin >> d[i];
	}

	for (int i = 1; i < n; i++)
	{
		int ans = 0;
		for (int j = i; j < n; j++)
		{
			ans += d[j];
			cout << ans << " ";
		}
		cout << endl;
	}
	return 0;
}