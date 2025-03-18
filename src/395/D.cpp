#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, q;
	cin >> n >> q;

	set<int>** b[n+1];
	set<int>* c[n + 1];

	iota(b, b + n+1, 0);
	for (int i = 1; i <= n; i++)
	{
		c[i] = new set<int>();
		c[i]->insert(i);
		b[i] = &c[i];
	}

	for (int i = 0; i < q; i++)
	{
		int com, x, y;
		cin >> com;
		if (com == 3)
		{
			cin >> x;
			cout << b[x] - c << endl;
		}
		else if (com == 1)
		{
			cin >> x >> y;

			c[b[x]-c]->erase(x);
			c[y]->insert(x);
			b[x] = &c[y];
		}
		else
		{
			cin >> x >> y;

			auto temp = c[x];
			c[x] = c[y];
			c[y] = temp;
		}
	}


	return 0;
}