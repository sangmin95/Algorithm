#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int N, K;
int C(int n, int k);

int main()
{
	cin >> N >> K;
	printf("%d\n", C(N, K));
}

int C(int n,int k)
{
	if (k == 0 || n == k)	return 1;

	return C(n - 1, k - 1) + C(n - 1, k);
}