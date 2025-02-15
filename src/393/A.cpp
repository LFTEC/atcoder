#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	if (s1 == "sick" && s2 == "sick")
	{
		cout << "1";
	}
	else if (s1 == "sick")
	{
		cout << "2";
	}
	else if (s2 == "sick")
	{
		cout << "3";
	}
	else
	{
		cout << "4";
	}
	return 0;
}