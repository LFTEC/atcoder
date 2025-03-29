#include <bits/stdc++.h>
using namespace std;

struct UnionFind
{
	vector<int> nodes;
	UnionFind(int n)
	{
		nodes.resize(n);
		iota(nodes.begin(), nodes.end(), 0);
	}

	int find(int x)
	{
		return nodes[x] == x ? x : nodes[x] = find(nodes[x]);
	}

	bool unite(int x, int y)
	{
		int rootX = find(x);
		int rootY = find(y);
		if (rootX == rootY) return true;


		nodes[rootX] = rootY;
		return false;
	}
};

int main()
{
	int n, m;
	cin >> n >> m;

	UnionFind uf(n);

	int ans = 0;
	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;

		if (uf.unite(u - 1, v - 1)) ans++;
	}

	cout << ans;
	return 0;
}