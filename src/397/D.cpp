#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sol(ll a, ll b, ll c)
{
	ll l = 0, r = 600000001;
	while (r - l > 1)
	{
		ll m = (l + r) / 2;
		ll res = a * m * m + b * m + c;
		if (res < 0)
		{
			l = m;
		}
		else if (res > 0)
		{
			r = m;
		}
		else
		{
			return m;
		}
	}

	return -1;
		
}

int main()
{
	ll n;
	cin >> n;

	for (ll d = 1; d * d * d <= n; d++)
	{
		if (n % d != 0) continue;

		ll m = n / d; 

		ll ans = sol(3, 3 * d, d * d - m);
		if (ans >= 0)
		{
			cout << ans + d << " " << ans;
			return 0;
		}
	}

	cout << -1;

	return 0;
}