#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k;
	cin >> k;

	string S, T;
	cin >> S;
	cin >> T;

	int sc, tc;
	sc = S.size();
	tc = T.size();
	if (sc == tc || abs(sc - tc) == 1)
	{
		int i = 0, j = 0;
		while (i < sc && j < tc)
		{
			if (S[i] != T[j])
			{
				if (sc == tc)
				{
					i++;
					j++;
				}
				else if (sc > tc)
				{
					i++;
					
				}
				else
				{
					j++;
				}
				k--;

				if (k < 0)
				{
					cout << "No";
					return 0;
				}
			}
			else
			{
				i++;
				j++;
			}
		}

		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	return 0;
}