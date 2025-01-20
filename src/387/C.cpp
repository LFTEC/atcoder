#include <bits/stdc++.h>
using namespace std;

long long int_pow(long long a, long long t)
{
	long long ans = 1;
	while (t--)
	{
		ans *= a;
	}
	return ans;
}

long long calc(long long d)
{
	if (d < 10) return 0;
	vector<int> digits;
	while (d)
	{
		digits.push_back(d % 10);
		d /= 10;
	}

	reverse(digits.begin(), digits.end());

	int n = digits.size();

	long long ans = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i == n)
		{
			ans++;
			break;
		}

		ans += min(digits[0], digits[i]) * int_pow(digits[0], n - i - 1);
		if (digits[i] >= digits[0])
			break;
	}


	for (int i = 2; i <= n; i++)
	{
		int m = i == n ? digits[0] - 1 : 9;

		for (int j = 1; j <= m; j++)
		{
			ans += int_pow(j, (i - 1));
		}
	}

	return ans;
}

int main()
{
	long long l, r;
	cin >> l >> r;

	long long ans = calc(r) - calc(l - 1);
	cout << ans;

	return 0;
}