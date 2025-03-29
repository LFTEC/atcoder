#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s, t;
	cin >> s >> t;
	vector<int> a[256];
	for (int i = 0; i < n; i++)
	{
		a[s[i]].push_back(i);
	}

	int ans = 0;
	for (int i = 'a'; i <= 'z'; i++)
	{
		int sizeB = 0; char alphaB = 0;
		for (auto j : a[i])
		{
			if (t[j] != alphaB)
			{
				sizeB++;
				alphaB = t[j];
			}
		}

		if (sizeB > 1)
		{
			cout << -1;
			return 0;
		}
		if (sizeB == 1 && alphaB != i) ans++;

	}

	cout << ans;
	return 0;
}