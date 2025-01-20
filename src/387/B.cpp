#include <bits/stdc++.h>
using namespace std;

int main()
{

	int x;
	cin >> x;

	int ans = 0;
	for(int i=0;i<9;i++)
		for (int j = 0; j < 9; j++)
		{
			if (x != (i + 1) * (j + 1))
				ans += (i + 1) * (j + 1);
		}
	cout << ans;
	return 0;
}