#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	for (auto& c : s)
	{
		if (c >= 'A' && c <= 'Z')
			cout << c;
	}
	return 0;
}