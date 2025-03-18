#include <bits/stdc++.h>
using namespace std;

int main()
{
	map<int,int> l, r;
	int n;
	cin >> n;
	int a[n];
	int ansR = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (!r[a[i]])
			ansR++;
		r[a[i]]++;
	}

	int ansL = 0;
	int ans = 0;
	for (int i = 1; i < n; i++)
	{
		if (l[a[i - 1]] == 0)
		{
			ansL++;
		}
		if (r[a[i - 1]] == 1)
		{
			ansR--;
		}

		l[a[i - 1]]++;
		r[a[i - 1]]--;

		ans = max(ansL + ansR, ans);
	}

	cout << ans ;
	
	return 0;
}