#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, d;
	cin >> n >> d;
	int t[n], l[n];
	for (int i = 0; i < n; i++)
	{
		cin >> t[i] >> l[i];

	}


	for (int i = 1; i <= d; i++)
	{
		int mAns = 0;
		for (int j = 0; j < n; j++)
		{
			mAns = max(mAns, (l[j] + i) * t[j]);
		}

		cout << mAns << endl;
	}
	return 0;
}