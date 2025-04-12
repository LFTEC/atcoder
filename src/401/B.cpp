#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	bool logged = false;
	int ans = 0;
	while (n--)
	{
		string s;
		cin >> s;

		if (s == "login")
		{
			logged = true;
		}
		else if (s == "logout")
		{
			logged = false;
		}
		else if (s == "private")
		{
			if (!logged)
				ans++;
		}

	}

	cout << ans;

	return 0;
}