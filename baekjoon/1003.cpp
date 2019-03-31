#define _CRT_SECURE_NO_WARNING
#include <iostream>

using namespace std;

typedef struct cnt
{
	int cnt0;
	int cnt1;
};

int N,TC;
cnt fib[45];
void fibo(int n);

int main()
{
	
	cin >> TC;
	fibo(41);

	while (TC--) {
		cin >> N;
		printf("%d %d\n", fib[N].cnt0, fib[N].cnt1);
	}
}
void fibo(int n)
{
	fib[0].cnt0 = 1;
	fib[0].cnt1 = 0;
	fib[1].cnt0 = 0;
	fib[1].cnt1 = 1;

	for (int i = 2;i < n;++i)
	{
		fib[i].cnt0 = fib[i - 2].cnt0 + fib[i - 1].cnt0;
		fib[i].cnt1 = fib[i - 2].cnt1 + fib[i - 1].cnt1;
	}
}