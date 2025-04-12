#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	char s[n];
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'o')
		{
			if (i > 0) s[i - 1] = '.';
			if (i < n - 1) s[i + 1] = '.';
			k--;
		}
	}

	if (k == 0)
	{
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '?') cout << '.';
			else cout << s[i];
		}
		return 0;
	}

	map<int, int> q;
	int index = -1;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '?')
		{
			if (index == -1)
			{
				index = i;
			}

			q[index]++;
		}
		else
		{
			index = -1;
		}
	}

	for (auto g : q)
	{
		k -= g.second % 2 ? g.second / 2 + 1 : g.second / 2;
		if (k < 0) break;
	}

	if (k == 0)
	{
		for (auto g : q)
		{
			if (g.second % 2)
			{
				for (int i = 0; i < g.second; i++)
				{
					s[g.first + i] = i % 2 ? '.' : 'o';
				}
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << s[i];
	}

	return 0;

}