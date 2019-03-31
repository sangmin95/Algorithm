#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


int main()
{
	int T, N, temp;

	std::cin >> T;

	for (int i = 0;i < T;i++) {
		scanf("%d", &N);

		int cnt = 0, even = 0, odd = 0;

		for (int j = 0;j < N;j++)
		{
			scanf("%d", &temp);
			cnt++;

			if (temp == 1)
			{
				//even position black
				if (cnt % 2 == 0)
				{
					even++;
				}
				//odd position black
				else
				{
					odd++;
				}
			}
		}
		// |even-odd| <= 1
		if ((even - odd) == 1 || (even - odd) == 0 || (even - odd) == -1 || (N % 2) == 1)
		{
			std::cout << "YES" << std::endl;
		}
		else
			std::cout << "NO" << std::endl;
		fflush(stdin);
		
	}

	return 0;
}

