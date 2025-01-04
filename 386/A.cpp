#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[4];
	memset(a, 0, sizeof(a));
	int num = 0;

	for (int i = 0; i < 4; i++)
	{
		int n;
		cin >> n;
		for (int j = 0; j < 4; j++)
		{
			if (a[j] == 0)
			{
				a[j] = n;
				num++;
				break;
			}
			else if (a[j] == n)
			{
				break;
			}
		}

		


	}

	if (num == 2)
		cout << "Yes";
	else
		cout << "No";
	

	return 0;
}