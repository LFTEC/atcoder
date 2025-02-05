#include <bits/stdc++.h>
using namespace std;

int main()
{
	string n;
	cin >> n;
	if (n == "N")
	{
		cout << "S";
	}
	else if (n == "S")
	{
		cout << "N";
	}
	else if (n == "E")
	{
		cout << "W";
	}
	else if (n == "W")
	{
		cout << "E";
	}
	else if (n == "NE")
	{
		cout << "SW";
	}
	else if (n == "SW")
	{
		cout << "NE";
	}
	else if (n == "NW")
	{
		cout << "SE";
	}
	else if (n == "SE")
	{
		cout << "NW";
	}

	return 0;
}