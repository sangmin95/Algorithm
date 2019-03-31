#define _CRT_SECURE_NO_WARNING
#include <iostream>

using namespace std;
int N, K;
long long com[1005][1005];
long long C(int n, int r);

int main()
{
	cin >> N;
	cin >> K;
	cout << C(N, K) << endl;
}

long long C(int n, int r)
{
	for (int i = 1;i <= n;++i)
		for (int j = 0;j < i + 1;++j)
		{
			if (j == 0 || i == j)	com[i][j] = 1;
			else com[i][j] = (com[i - 1][j - 1] + com[i - 1][j])%10007;
		}
	return com[n][r];
}