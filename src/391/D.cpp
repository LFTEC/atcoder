#include <bits/stdc++.h>
using namespace std;

struct block
{
	int Y;
	int serial;
};

int main()
{
	int n, w;
	cin >> n >> w;

	vector<block> blocks[w];
	int layer[n];
	int disapear[n];
	fill(disapear, disapear + n, 0);


	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		blocks[x - 1].push_back({ y, i });
	}

	for (int i = 0; i < w; i++)
	{
		sort(blocks[i].begin(), blocks[i].end(), [](block& a, block& b) {
			return a.Y < b.Y;
			});

		for (int j = 0; j < blocks[i].size(); j++)
		{
			layer[blocks[i][j].serial] = j;
			disapear[j] = max(disapear[j], blocks[i][j].Y);
		}
		disapear[blocks[i].size()] = 2e9;
	}

	for (int i = 1; i < n; i++)
	{
		disapear[i] = max(disapear[i], disapear[i - 1] + 1);
	}

	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int t, a;
		cin >> t >> a;
		disapear[layer[a - 1]] > t ? cout << "Yes" : cout << "No";
		cout << endl;
	}

	return 0;
}