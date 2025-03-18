#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a0, a1, a2, n;
	cin >> n;
	cin >> a0 >> a1;
	for (int i = 2; i < n; i++)
	{
		cin >> a2;
		if (a0 == a1 && a0 == a2)
		{
			cout << "Yes";
			return 0;
		}

		a0 = a1;
		a1 = a2;
	}
	cout << "No";
}