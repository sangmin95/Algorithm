#include <iostream>

int compute(int N, int K);
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	while (!cin.fail()) {
		cout << compute(N, K) << endl;
		cin >> N >> K;
	}
	return 0;
}


int compute(int N, int K)
{
	int sum = 0;
	int stamp=0;

	while (N >= 1)
	{
		sum =sum + N;
		stamp = stamp + N;
		N = stamp / K;
		stamp = stamp % K;
	
	}
	return sum;
}