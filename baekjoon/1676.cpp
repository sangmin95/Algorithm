#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
int N;
int zeroCnt(int n);

int main()
{
	cin >> N;
	cout << zeroCnt(N) << endl;

	return 0;
}

int zeroCnt(int n)
{
	int zero_cnt = 0;
	for (int i = 1;i <= n;++i)
	{
		if (i % 5 == 0)		zero_cnt++;
		if (i % 25 == 0)	zero_cnt++;
		if (i % 125 == 0)	zero_cnt++;
	}
	return zero_cnt;
}