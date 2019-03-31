#include <iostream>

int N, sugar3, sugar5;
int compute(int Q, int R);

int main()
{
	int Quentient, Remainer;

	std::cin >> N;

	Quentient = N / 5;
	Remainer = N % 5;
	printf("%d",compute(Quentient, Remainer));
	
}

int compute(int Q, int R)
{
	if (R % 3 == 0 && Q >= 0) {

		sugar5 = Q;
		sugar3 = R / 3;
		return sugar5 + sugar3;
	}
	else if (Q >= 1) {
		Q--;
		R += 5;
		compute(Q, R);
	}
	else
		return -1;


}