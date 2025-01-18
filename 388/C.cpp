#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int t[n];

	for (int i = 0; i < n; i++)
	{
		cin >> t[i];

	}

	int ans = 0;
	int ansl = 0;
	int lastJ = 0;
	for (int i = 1; i < n; i++)
	{
		ans += ansl;

		for (int j = lastJ; j < i; j++)
		{
			if (t[j] * 2 <= t[i])
			{
				ans++;
				ansl++;
				lastJ = j+1;
			}
			else
			{
				lastJ = j;
				break;
			}
				
		}
	}

	cout << ans;
	return 0;
}