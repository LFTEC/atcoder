#include <bits/stdc++.h>
using namespace std;

int main()
{
	map<int, vector<int>> m;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;

		m[a].push_back(i);
	}

	int ans = 1e9;

	for (auto& p : m)
	{
		int v = p.first;
		for (int i = 1; i < p.second.size(); i++)
		{
			ans = min(ans,p.second[i] - p.second[i - 1]);
		}
	}

	if (ans == 1e9)
		cout << -1;
	else
		cout << ans + 1;

	return 0;

}