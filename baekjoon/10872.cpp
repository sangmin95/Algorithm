#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
int N;

int fact(int n);

int main()
{
	cin >> N;
	cout << fact(N) << endl;

}

int fact(int n)
{
	if (n == 0) return 1;
	if (n == 1) return 1;
	return fact(n - 1)*n;
}