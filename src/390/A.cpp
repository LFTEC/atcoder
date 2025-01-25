#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[5];
	bool q = false;

	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		if (i - 1 >= 0 && a[i - 1] > a[i])
		{
			if (q)
			{
				cout << "No";
				return 0;
			}
			int m = a[i - 1];
			a[i - 1] = a[i];
			a[i] = m;
			q = true;
		}
	}

	if (q)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}