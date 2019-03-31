#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int N;
int fib[47];
int fibo(int n);

int main()
{
	scanf("%d", &N);
	printf("%d\n", fibo(N));
	return 0;
}

int fibo(int n)
{
	fib[0] = 0;
	fib[1] = 1;

	for (int i = 0;i < n-1;++i)
		fib[i+2] = fib[i] + fib[i + 1];
	
	return fib[n];
}

/*int fibo(int n)
{
	if (n == 0)		return 0;
	if (n == 1)		return 1;
	return fibo(n - 1) + fibo(n - 2);
}*/