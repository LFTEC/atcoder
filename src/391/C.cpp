#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, q;
	cin >> n >> q;
	int g[n],l[n];
	fill(l, l + n, 1);
	iota(g, g + n, 0);

	int ans = 0;
	while (q--)
	{
		int c;
		cin >> c;
		if (c == 2)
		{
			cout << ans << endl;
		}
		else
		{
			int p, h;
			cin >> p >> h;
			p--, h--;

			l[g[p]]--;
			l[h]++;
			if (l[g[p]] == 1)
				ans--;
			if (l[h] == 2)
				ans++;

			g[p] = h;
		}
	}
	return 0;
}