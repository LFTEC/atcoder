#include <bits/stdc++.h>
using namespace std;

struct node
{
	int x, y;
	char c;
};

int main()
{
	int n, m;
	cin >> n >> m;
	node nodes[m];
	for (int i = 0; i < m; i++)
	{
		cin >> nodes[i].x >> nodes[i].y >> nodes[i].c;		
	}

	sort(nodes, nodes + m, [](node& a, node& b) {
		if (a.x == a.y)
			return a.y < b.y;
		return a.x < b.x;
		});

	int min_y = 1 << 30;

	for (int i = 0; i < m; i++)
	{
		if (nodes[i].c == 'W')
		{
			min_y = min(min_y, nodes[i].y);
		}
		else
		{
			if (nodes[i].y >= min_y)
			{
				cout << "No";
				return 0;
			}
		}
	}

	cout << "Yes";
	return 0;
}