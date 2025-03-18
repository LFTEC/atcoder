#include <bits/stdc++.h>
using namespace std;

int main()
{
	float t;
	cin >> t;
	if (t >= 38.0)
		cout << 1;
	else if (t >= 37.5 && t < 38.0)
		cout << 2;
	else
		cout << 3;
	return 0;
}