#include <bits/stdc++.h>
using namespace std;

int main()
{
	stack<int> a;
	int q;
	cin >> q;
	while (q--)
	{
		int c;
		cin >> c;
		if (c == 1)
		{
			int x;
			cin >> x;
			a.push(x);
		}
		else
		{
			if (a.empty())
				cout << 0 << endl;
			else
			{
				auto& b = a.top();
				a.pop();
				cout << b << endl;
			}
		}
	}
	return 0;
}