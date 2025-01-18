#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	cin >> a;
	int b = static_cast<int>(a[0]) - '0';
	int c = a[2] - '0';
	cout << b * c;
	return 0;
}