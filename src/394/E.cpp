#include <bits/stdc++.h>
#define inf 1e9
using namespace std;

int main()
{
	int n;
	cin >> n;

	char c[n][n];
	int a[n][n];
	queue<pair<int, int>> q;

	for (int i = 0; i < n; i++)
	{
		a[i][i] = 0;
		q.push({ i,i });
	}

	for (int i = 0; i < n; i++)
	{		
		for (int j = 0; j < n; j++)
		{
			cin >> c[i][j];
			if (i == j) continue;

			if (c[i][j] != '-')
			{
				a[i][j] = 1;
				q.push({ i,j });
			}
			else
				a[i][j] = inf;
		}
	}

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == x && y == j) continue;
				if (c[i][x] != '-' && c[y][j] != '-' && c[i][x] == c[y][j] && a[i][j] == inf)
				{
					a[i][j] = a[x][y] + 2;
					q.push({ i,j });
				}
			}

		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << (a[i][j] == inf ? -1 : a[i][j]) << " \n"[j==n-1];
		}
	}



	return 0;
}