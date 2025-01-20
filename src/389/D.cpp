#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
	ll r;
	cin >> r;

	auto f = [&](ll a, ll b) {
		return (2 * a + 1) * (2 * a + 1) + (2 * b + 1) * (2 * b + 1) <= 4 * r * r;

		};

	ll ans = 0;
	ll u = r - 1;
	for (int i = 1; f(i, 1); i++)
	{
		while (!f(i, u)) u--;
		ans += u;
	}

	ans *= 4;
	ans += (r - 1) * 4 + 1;
	cout << ans;

	return 0;
}