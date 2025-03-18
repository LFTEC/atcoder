#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int ans = 0;
	for (int l = 0;l<s.size();l++)
	{
		char c = "io"[(l + ans) % 2];
		if (s[l] != c)
		{
			ans++;

		}
	}

	if ((s.size() + ans) % 2 == 1) ans++;
	cout << ans;
	return 0;
}