#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int p[n];
	int rank[n];
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
		rank[i] = p[i];
	}

	sort(rank, rank + n, [](int& a, int& b) {return a > b; });

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; i < n; j++)
		{
			if (p[i] == rank[j])
			{
				cout << j + 1 << endl;
				break;
			}
		}
	}

	return 0;
}