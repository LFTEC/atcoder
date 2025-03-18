#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> t[n * k];
	for (int i = 0; i < n * k - 1; i++)
	{
		int u, v;
		cin >> u >> v;
		t[u - 1].push_back(v - 1);
		t[v - 1].push_back(u - 1);
	}

	int size[n * k];
	fill(size, size + (n * k), 1);

	stack<tuple<int, int, int>> q;
	q.push({ 0,-1,0 });

	while (!q.empty())
	{
		auto [v, p, b] = q.top();
		q.pop();

		if (!b)
		{
			q.push({ v,p,1 });
			for (auto u : t[v])
			{
				if (u != p)
				{
					q.push({ u,v,0 });
				}
			}			
		}
		else
		{
			int children = 0;
			for (auto u : t[v])
			{
				if (u != p)
				{
					size[v] += size[u];
					if (size[u]) children++;
				}
			}

			if (size[v] > k || children >= 3)
			{
				cout << "No";
				return 0;
			}
			else if (size[v] < k && children >= 2)
			{
				cout << "No";
				return 0;
			}
			else if (size[v] == k)
			{
				size[v] = 0;
			}

		}
	}

	cout << "Yes";
	return 0;
}