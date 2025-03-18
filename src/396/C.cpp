#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	long long b[n], w[m];

	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}

	for (int i = 0; i < m; i++)
	{
		cin >> w[i];
	}

	auto sort_f = [](long long& a, long long& b) {return a > b; };
	sort(b, b + n, sort_f);
	sort(w, w + m, sort_f);

	int seq = 0;
	long long ans = 0;
	while (seq < n)
	{
		long long sb = b[seq] + (seq < m && w[seq] >= 0 ? w[seq]: 0);
		if (sb < 0) break;
		seq++;
		ans += sb;
	}

	cout << ans;
	return 0;
}