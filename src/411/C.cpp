#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, q;
	cin >> n >> q;
	bool a[n];
	fill(a, a + n, false);
	int ans = 0;
	while (q--)
	{
		int A;
		cin >> A;
		A--;

		a[A] = !a[A];
		bool l, r;
		l = A == 0 ? false : a[A - 1];
		r = A == n - 1 ? false : a[A + 1];

		if (a[A])
		{
			if (l && r)
				ans--;
			else if (!l && !r)
				ans++;
		}
		else
		{
			if (!l && !r)
				ans--;
			else if (l && r)
				ans++;
		}

		cout << ans << endl;
	}
	return 0;
}