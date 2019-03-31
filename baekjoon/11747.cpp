#include <iostream>

int cnt = 0;
int N;

int one(int* ary);
int two(int* ary);
int three(int* ary);
int four(int* ary);

int main()
{
	
	std::cin >> N;
	
	int *ary = (int*)malloc(sizeof(int)*N);

	for (int i = 0;i < N;i++)
	{
		std::cin >> ary[i];
	}

	if (one(ary) != -1)
	{
		printf("%d", cnt);
	}
	else if (two(ary) != -1)
	{
		printf("%d", cnt);
	}
	else if (three(ary) != -1)
	{
		printf("%d", cnt);
	}
	else if (four(ary) != -1)
	{
		printf("%d", cnt);
	}

	return 0;
}

int one(int* ary)
{
	int i;
	cnt = 0;

	while (cnt < 10)
	{
		for (i = 0;i < N;i++) {
			if (ary[i] == cnt) {
				i = -1;
				cnt++;
			}
		}
		if (cnt != 10)
			return cnt;
	}
	return -1;

}

int two(int* ary)
{
	int i;
	int first, second;
	cnt = 10;

	while (cnt < 100)
	{
		first = cnt / 10;
		second = cnt % 10;
		
		for (i = 0;i < N-1;i++) {
			if (ary[i] == first) {
				if (ary[i + 1] == second) {
					i = -1;
					cnt++;
					first = cnt / 10;
					second = cnt % 10;
				}				
			}
		}
		if (cnt != 100)
			return cnt;
	}
	return -1;

}

int three(int* ary)
{
	int i;
	int first, second,third;
	cnt = 100;

	while (cnt < 1000)
	{
		first = cnt / 100;
		second = (cnt % 100)/10;
		third = cnt % 10;

		for (i = 0;i < N - 2;i++) {
			if (ary[i] == first) {
				if (ary[i + 1] == second) {
					if (ary[i + 2] == third) {
						i = -1;
						cnt++;
						first = cnt / 100;
						second = (cnt % 100) / 10;
						third = cnt % 10;
					}
				}
			}
			
		}
		return cnt;
	}
	if (cnt != 100)
		return cnt;
}

int four(int* ary)
{
	int i;
	int first, second, third, fourth;
	cnt = 1000;

	first = cnt / 1000;
	second = (cnt % 1000) / 100;
	third = (cnt % 100)/10;
	fourth = cnt % 10;

	for (i = 0;i < N - 3;i++) {
		if (ary[i] == first) {
			if (ary[i + 1] == second) {
				if (ary[i + 2] == third) {
					if (ary[i + 3] == fourth) {
						
						return cnt;

					}
				}
			}
		}	
	}
	
	return -1;
}