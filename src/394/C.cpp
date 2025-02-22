#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	for (int i = 0; i < s.size()-1; )
	{
		if (s[i] == 'W' && s[i + 1] == 'A')
		{
			s[i] = 'A', s[i + 1] = 'C';

			i = i == 0 ? i + 2 : i - 1;
		}
		else
			i++;
	}

	cout << s;
	return 0;
}