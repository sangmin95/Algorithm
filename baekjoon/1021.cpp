#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int N, M, pos, shift_cnt=0;
deque<int> DQ;
void solve(deque<int>& dq);

int main()
{
	scanf("%d %d", &N, &M);

	for (int i = 0;i < N;++i)
	{
		DQ.push_front(0);
	}

	for (int i = 0;i < M;++i)
	{
		scanf("%d", &pos);
		deque<int>::iterator it = DQ.begin();
		DQ.at(pos-1) = i+1;

	}

	solve(DQ);
	printf("%d", shift_cnt);
	
	return 0;
}

void solve(deque<int>& dq)
{
	deque<int>::iterator iter;
	int i = 0;

	while (M > 0)
	{
		i++;
		iter = find(dq.begin(), dq.end(), i);
		if (iter - dq.begin() <= dq.end() - iter)
		{
			rotate(dq.begin(), iter, dq.end());
			shift_cnt = shift_cnt + (iter - dq.begin());
			dq.pop_front();
			M--;
		}
		else// (iter - dq.begin() > *dq.end - *iter)
		{
			rotate(dq.begin(), iter, dq.end());
			shift_cnt = shift_cnt + dq.end() - iter;
			dq.pop_front();
			M--;
		}

	}
}