#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct snake
{
	ll pos = 0;
	ll length = 0;
};
int main()
{
	vector<snake> queue;

	int Q;
	cin >> Q;
	ll start = 0, dlen = 0;
	while (Q--)
	{
		int command;
		cin >> command;
		if (command == 1)
		{
			int len;
			cin >> len;
			snake s;
			if (queue.size() == 0)
			{
				s.length = len;
				s.pos = 0;
			}
			else
			{
				s.length = len;
				s.pos = queue.back().pos + queue.back().length;
			}
			queue.push_back(s);
		}
		else if (command == 2)
		{
			start++;
			dlen += queue[start - 1].length;
		}
		else if (command == 3)
		{
			int no;
			cin >> no;
			cout << queue[no - 1 + start].pos - dlen << endl;
		}
	}
	return 0;
}