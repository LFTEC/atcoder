#include <bits/stdc++.h>
using namespace std;

int main()
{
	string input;
	cin >> input;

	int i = 0;
	int count = 0;
	while (i < input.size())
	{
		if (input[i] == '0' && i+1 < input.size() && input[i+1] == '0'  )
		{

			i++;
		}		

		i++;
		count++;

	}

	cout << count;
	return 0;
}