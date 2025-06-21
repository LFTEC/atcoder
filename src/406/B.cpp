#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	long long ans = 1;
	while (n--)
	{
		long long a;
		cin >> a;

		if (pow(10, k) / a > ans)
			ans *= a;
		else
			ans = 1;
	}

	cout << ans;
	return 0;
}