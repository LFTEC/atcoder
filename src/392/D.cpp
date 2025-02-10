#include <bits/stdc++.h>
using namespace std;

struct dice
{
	long long k;
	map<int, long long> slice;
};

int main()
{
	int n;
	cin >> n;

	dice dices[n];
	for (int i = 0; i < n; i++)
	{
		cin >> dices[i].k;
		for (int j = 0; j < dices[i].k; j++)
		{
			int num;
			cin >> num;
			dices[i].slice[num]++;
		}
	}

	long double ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			long double ans1 = 0;
			dice* d1, *d2;
			if (dices[i].k < dices[j].k)
			{
				d1 = &dices[i];
				d2 = &dices[j];
			}
			else
			{
				d1 = &dices[j];
				d2 = &dices[i];
			}
			for (const auto& pair : d1->slice)
			{
				ans1 += 1.0 * pair.second * d2->slice[pair.first] ;
			}
			ans = max(ans, ans1 / (dices[i].k * dices[j].k));
		}
	}

	cout << fixed << setprecision(15) << ans;

	return 0;
}