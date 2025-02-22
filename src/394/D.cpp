#include <bits/stdc++.h>
using namespace std;

struct node
{
	char c;
	node* pre = nullptr;
	node* next = nullptr;
};

int main()
{
	node* b = new node;
	
	string s;
	cin >> s;

	node* preNode = b;
	int r = 0;
	for (const char& c : s)
	{
		node* b1 = new node;
		b1->c = c;

		preNode->next = b1;
		b1->pre = preNode;
		preNode = b1;
		r++;
	}

	if (r % 2)
	{
		cout << "No";
		return 0;
	}

	node* cur = b->next;

	while (cur->next)
	{
		if (cur->c == '(' && cur->next->c == ')' ||
			cur->c == '[' && cur->next->c == ']' ||
			cur->c == '<' && cur->next->c == '>')
		{
			r -= 2;
			if (r == 0)
			{
				cout << "Yes";
				return 0;
			}
			if (cur->pre == b)
			{
				b->next = cur->next->next;
				cur->next->next->pre = b;
				cur = cur->next->next;
			}
			else
			{
				cur->pre->next = cur->next->next;
				if(cur->next->next)
					cur->next->next->pre = cur->pre;
				cur = cur->pre;
			}
			
		}
		else
		{
			cur = cur->next;
		}
	}

	cout << "No";



	return 0;
}

