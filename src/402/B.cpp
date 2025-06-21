#include <bits/stdc++.h>
using namespace std;

int main()
{
	int q;
	cin >> q;
	queue<int> q1;
	while (q--)
	{
		int c;
		cin >> c;
		if (c == 1)
		{
			int x;
			cin >> x;
			q1.push(x);
		}
		else
		{
			auto& cq = q1.front();
			q1.pop();
			
			cout << cq << endl;
		}
	}
	return 0;
}