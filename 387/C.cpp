#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long l, r;
	cin >> l >> r;

	int ls[18];
	int ld = 0;
	while(l > 10)
	{
		ls[ld] = l % 10;
		l = l / 10;
		ld++;
	}

	int rd = 0, rs[18];
	while (r > 10)
	{
		rs[rd] = r % 10;
		r = r / 10;
		rd++;
	}

	int ans = 0;
	for (int i = ld; i <= rd; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			int d = i - 1;
			ans += pow(j, d);
		}
	}

	cout << ans;

	return 0;
}