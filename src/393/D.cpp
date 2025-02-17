#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int c1 = 0;
	vector<int> d;
	d.push_back(0);
	while (n--)
	{
		char i;
		cin >> i;
		if (i == '0') 
		{
			d.push_back(c1);
		}
		else
		{
			c1++;
		}
	}

	long long ans = 0;
	for (int i = 1; i < d.size(); i++)
	{
		ans += min(d[i], c1 - d[i]);
	}

	cout << ans;
	return 0;
}