#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int N;
long long fib[92];
long long fibo(int n);

int main()
{
	scanf("%d", &N);
	printf("%lld\n", fibo(N));
	return 0;
}

long long fibo(int n)
{
	fib[0] = 0;
	fib[1] = 1;

	for (int i = 0;i < n - 1;++i)
		fib[i + 2] = fib[i] + fib[i + 1];

	return fib[n];

}