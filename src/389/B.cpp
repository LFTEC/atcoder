#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long x;
	cin >> x;
	int div = 2;
	while (x > 1)
	{
		x = x / div;
		div++;
	}
	cout << --div;

}