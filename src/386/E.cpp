#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int>* nodes = new vector<int>[N+1];
	for (int i = 1; i <= N-1; i++)
	{
		int u, v;
		cin >> u >> v;
		nodes[u].push_back(v);
		nodes[v].push_back(u);
	}

	int ans = N;
	for (int i = 1; i <= N; i++)
	{
		sort(nodes[i].begin(), nodes[i].end(), [&](int& a, int& b) {
			return nodes[a].size() > nodes[b].size();

			});
		int x = 0, y = 0;
		for (int n : nodes[i])
		{
			x++;
			y = nodes[n].size() - 1;
			ans = min(ans, N - (1 + x + x * y));
		}
	}

	cout << ans;
	return 0;
}