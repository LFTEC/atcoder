#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (auto& e : a)
	{
		cin >> e;
	}

	vector<int> b(n+1, 0);

	int suml[n], sumr[n];

	int now = 0;
	for (int i = 0; i < n; i++)
	{
		if (++b[a[i]] == 1)
		{
			now++;
		}

		suml[i] = now;
	}

	now = 0;
	b = vector<int>(n + 1, 0);
	for (int i = n - 1; i>=0; i--)
	{
		if (++b[a[i]] == 1)
		{
			now++;
		}
		sumr[i] = now;
	}

	int ans = max(suml[n - 1], sumr[0]);
	for (int i = 0; i < n - 1; i++)
	{
		ans = max(ans, suml[i] + sumr[i + 1]);
	}

	cout << ans;
	return 0;
}