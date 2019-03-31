#define _CRT_SECURE_NO_WARNIGNS
#include <iostream>
#include <deque>
#include <string>

using namespace std;
int N;

int main()
{
	int i;
	cin >> N;
	deque<int> DQ;

	while (N--)
	{
		string str;
		cin >> str;

		if (!str.compare("push_back"))
		{
			cin >> i;
			DQ.push_back(i);
		}
		else if (!str.compare("push_front"))
		{
			cin >> i;
			DQ.push_front(i);
		}
		else if (!str.compare("pop_front"))
		{
			if (DQ.size() == 0) {
				printf("-1\n");
			}
			else {
				printf("%d\n", DQ.front());
				DQ.pop_front();
			}
		}
		else if (!str.compare("pop_back"))
		{
			if (DQ.size() == 0) {
				printf("-1\n");
			}
			else {
				printf("%d\n", DQ.back());
				DQ.pop_back();
			}
		}
		else if (!str.compare("size"))
		{
			printf("%d\n", DQ.size());
		}
		else if (!str.compare("empty"))
		{
			if (DQ.empty())
			{
				printf("1\n");
			}
			else
			{
				printf("0\n");
			}
		}
		else if (!str.compare("front"))
		{
			if (DQ.empty())
			{
				printf("-1\n");
			}
			else {
				printf("%d\n", DQ.front());
			}
		}
		else if (!str.compare("back"))
		{
			if (DQ.empty())
			{
				printf("-1\n");
			}
			else {
				printf("%d\n", DQ.back());
			}
		}
		else
		{

		}

	}
}