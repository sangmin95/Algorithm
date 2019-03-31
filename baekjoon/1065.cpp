#include <iostream>

using namespace std;

int treble_figure(int N);

int main()
{
	int N;
	cin >> N;
	
	if (N < 100)
	{
		cout << N;
	}
	else
	{
		cout << 99+treble_figure(N);
	}


	return 0;
}

int treble_figure(int N)
{
	int digit1, digit2, digit3;
	int cnt = 0;

	for (int i = 100;i <= N;i++)
	{
		digit1 = i / 100;
		digit2 = (i % 100) / 10;
		digit3 = i % 10;
		
		if ((digit1 - digit2) == (digit2 - digit3))
		{
			cnt++;
		}
	}

	

	return cnt;
}