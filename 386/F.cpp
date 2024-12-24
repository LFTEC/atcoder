#include <bits/stdc++.h>
using namespace std;

struct b
{
	int x, h;
};

int main()
{
	int N;
	cin >> N;

	b* buidings = new b[N];
	for (int i = 0; i < N; i++)
	{
		cin >> buidings[i].x >> buidings[i].h;
	}

	long double maxH = -1.0;
	for (int i = 1; i < N; i++)
	{
		for (int j = i - 1; j < i; j++)
		{
			maxH = max(maxH, (static_cast<long double>(buidings[i].x) * buidings[j].h - static_cast<long double>(buidings[j].x) * buidings[i].h) / (buidings[i].x - buidings[j].x));
		}
	}

	if (maxH < 0)
	{
		cout << "-1" << endl;
	}
	else
	{
		cout << fixed << setprecision(18) << maxH;
	}

	return 0;
}