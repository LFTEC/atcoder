#include <bits/stdc++.h>

int max(int a, int b, int c)
{
	int ar[3] = { a,b,c };
	std::sort(ar, ar + 3);
	return ar[2];
}

struct r
{
	int v;
	int c;
};

r change(int * q, int cnt, int seq)
{
	r data;
	if (!cnt)
	{
		data.v = q[seq];
		data.c = 1;
		return data;
	}

	int p = cnt - 1;
	int m1 = 3 * seq - 2;
	int m2 = 3 * seq - 1;
	int m3 = 3 * seq;

	auto r1 = change(q, p, m1);
	auto r2 = change(q, p, m2);
	auto r3 = change(q, p, m3);
	if (r1.v == r2.v && r1.v == r3.v)
	{
		data.v = r1.v;
		data.c = r1.c + r2.c + r3.c - max(r1.c, r2.c, r3.c);
	}
	else if (r1.v == r2.v)
	{
		data.v = r1.v;
		data.c = std::min(r1.c, r2.c);
	}
	else if (r1.v == r3.v)
	{
		data.v = r1.v;
		data.c = std::min(r1.c, r3.c);
	}
	else if (r2.v == r3.v)
	{
		data.v = r2.v;
		data.c = std::min(r2.c, r3.c);
	}
	return data;
}

int main()
{
	int n;
	std::cin >> n;

	std::string s;
	std::cin >> s;

	int q[s.size()+1];
	for (int i = 0; i < s.size(); i++)
	{
		q[i+1] = s[i] - '0';
	}

	std::cout << change(q, n, 1).c;
	return 0;
}