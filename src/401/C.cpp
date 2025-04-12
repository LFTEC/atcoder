#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<long long> a(n+1,0);

	for (int i = 0; i <= n; i++)
	{
		if (i < k)
			a[i] = 1;
		else if (i == k)
			a[i] = k;
		else
			a[i] = (a[i - 1] * 2 - a[i - k - 1] + (int)1e9) % (int)1e9;
	}

	cout << a[n];
	return 0;
}