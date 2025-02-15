#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int interval = 49;
	int ans = 0;
	while (interval>=1)
	{
		for (int i = 1; i + interval * 2 <= 100; i++)
		{
			if (s[i - 1] == 'A' && s[i - 1 + interval] == 'B' && s[(i - 1) + interval * 2] == 'C')
				ans++;

		}
		interval--;
	}
	cout << ans;
}