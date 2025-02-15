#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	set<pair<int, int>> edges;
	int ans = 0;
	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;

		if (u == v)
			ans++;
		else
		{
			int maxv = max(u, v);
			int minv = min(u, v);
			if (edges.find(make_pair(minv, maxv)) == edges.end())
			{
				edges.insert(make_pair(minv, maxv));
			}
			else
			{
				ans++;
			}
		}
	}

	cout << ans;
	return 0;
}
