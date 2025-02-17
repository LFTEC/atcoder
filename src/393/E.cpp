#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	
	cin >> n >> k;
	int a[n], maxA = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		maxA = max(maxA, a[i]);
	}

	vector<int> s(maxA + 1), t(maxA + 1), u(maxA + 1);

	for (int i = 0; i < n; i++)
	{
		s[a[i]]++;
	}

	for (int i = 1; i <= maxA; i++)
	{
		for (int j = i; j <= maxA; j += i)
		{
			t[i] += s[j];
		}
	}

	for (int i = 1; i <= maxA; i++)
	{
		if (t[i] < k) continue;

		for (int j = i; j <= maxA; j += i)
		{
			u[j] = max(u[j], i);
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << u[a[i]] << endl;
	}
	return 0;
}
