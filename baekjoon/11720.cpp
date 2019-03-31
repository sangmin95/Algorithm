#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	char c;
	int N;
	int sum = 0;

	scanf("%d\n", &N);

	for (int i = 0;i < N;i++)
	{
		c = getchar();
		sum = sum + (c - 48);
	}

	printf("%d\n", sum);


	return 0;
}