#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int c[m];
	vector<int> N[n];

	for (int j = 0; j < m; j++)
	{
		int k;
		cin >> k;
		c[j] = k;
		for (int i = 1; i <= k; i++)
		{
			int A;
			cin >> A;
			N[A - 1].push_back(j);
		}
	}

	int ans = 0;
	while (n--)
	{
		int b;
		cin >> b;
		
		for (auto& cai : N[b - 1])
		{
			c[cai]--;
			if (c[cai] == 0)
				ans++;
		}

		cout << ans << endl;
	}

	return 0;
}