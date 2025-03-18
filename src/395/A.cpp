#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int p;
	cin >> p;
	for (int i = 1; i < n; i++)
	{
		int a;
		cin >> a;

		if (a <= p)
		{
			cout << "No";
			return 0;
		}

		p = a;
	}

	cout << "Yes";
	return 0;
}