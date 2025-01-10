#include <bits/stdc++.h>
using namespace std;

int main()
{
	int h, w;
	cin >> h >> w;

	char hm[h][w], vm[h][w];
	pair<int, int> start, end;
	for (int i = 0; i < h; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < s.size(); j++)
		{
			hm[i][j] = s[j];
			vm[i][j] = s[j];

			if (s[j] == 'S')
			{
				start.first = i;
				start.second = j;
			}
			else if (s[j] == 'G')
			{
				end.first = i;
				end.second = j;
			}
		}
	}

	queue<pair<int,int>> hq, vq;
	hq.push(start);
	vq.push(start);

	int ans = 0;

	bool div = true;
	while (true)
	{
		if (hq.size() == 0 && vq.size() == 0)
		{
			cout << -1;
			return 0;
		}

		if (hq.size())
		{
			if (div)
			{

			}
		}
	}
	return 0;
}