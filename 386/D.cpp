#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n, m;
	cin >> n >> m;

	map<int, int> B;
	map<int, set<int>>W;

	for (int i = 0; i < m; i++)
	{
		int x, y;
		char c;
		cin >> x >> y >> c;
		if (c == 'W')
		{
			W[x].insert(y);
		}
		else
		{
			if (B[x] < y)
				B[x] = y;
		}
	}

	for (auto& b : B)
	{
		for (auto i = W.begin(); i != W.upper_bound(b.first); i++)
		{
			for (auto j = i->second.begin(); j != i->second.upper_bound(b.second); j++)
			{
				cout << "No";
				return 0;
			}
		}
	}

	cout << "Yes";
	return 0;
}