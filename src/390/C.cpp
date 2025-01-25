#include <bits/stdc++.h>
using namespace std;


int main()
{
	int h, w;
	cin >> h >> w;
	vector <pair<int, int>> white;
	int mini = 1e9, minj = 1e9, maxi = -1, maxj = -1;

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			char v;
			cin >> v;
			if (v == '#')
			{
				mini = min(mini, i);
				minj = min(minj, j);
				maxi = max(maxi, i);
				maxj = max(maxj, j);
			}
			else if (v == '.')
			{
				white.push_back({ i,j });
			}
		}
	}

	for (auto p : white)
	{
		if ((p.first >= mini && p.second >= minj) && (p.first <= maxi && p.second <= maxj))
		{
			cout << "No";
			return 0;
		}
	}

	cout << "Yes";
	return 0;
}