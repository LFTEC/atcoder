#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9;

int main()
{
	int h, w;
	cin >> h >> w;

	vector<string> s(h);

	int sh, sw, gh, gw;
	for (int i = 0; i < h; i++)
	{
		cin >> s[i];
		
		for (int j = 0; j < w; j++)
		{
			if (s[i][j] == 'S')
			{
				sh = i;
				sw = j;
			}
			else if (s[i][j] == 'G')
			{
				gh = i;
				gw = j;
			}
		}
	}

	int ans = inf;

	vector<vector<pair<int, int>>> p(2);

	p[0] = { {0,1},{0,-1} };
	p[1] = { {1,0},{-1,0} };

	for (int k = 0; k < p.size(); k++)
	{
		vector<vector<int>> d(h, vector<int>(w, inf));

		queue<pair<int, int>> q;

		d[sh][sw] = 0;
		q.emplace(sh, sw);

		while (!q.empty())
		{
			auto [di, dj] = q.front();
			q.pop();

			for (auto [ni, nj] : p[(di + dj + k) % 2])
			{
				ni += di;
				nj += dj;

				if (ni >= h || ni < 0 || nj >= w || nj < 0) continue;
				if (s[ni][nj] == '#') continue;
				if (d[ni][nj] == inf)
				{
					d[ni][nj] = d[di][dj] + 1;
					q.emplace(ni, nj);
				}
			}
		}

		ans = min(ans, d[gh][gw]);
	}

	if (ans == inf) cout << -1;
	else
		cout << ans;

	return 0;

}