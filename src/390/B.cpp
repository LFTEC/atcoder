#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long double a[n];

	cin >> a[0];
	cin >> a[1];
	long double div = a[1] / a[0];

	for (int i = 2; i < n; i++)
	{
		cin >> a[i];
		if (a[i] / a[i - 1] != div)
		{
			cout << "No";
			return 0;
		}
	}

	cout << "Yes";
	return 0;
}