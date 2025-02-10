#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int b[m];
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}

	sort(b, b + m);

	int s = 0;
	vector<int> res;
	for (int i = 1; i <= n; i++)
	{
		if (i != b[s])
		{
			res.push_back(i);
		}
		else
		{
			s++;
		}
	}

	cout << res.size() << endl;
	for (int& r : res)
	{
		cout << r << " ";
	}
	return 0;
}