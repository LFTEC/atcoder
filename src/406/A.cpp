#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (c > a)
		cout << "No";
	else if (c == a && d > b)
		cout << "No";
	else
		cout << "Yes";

	return 0;
}