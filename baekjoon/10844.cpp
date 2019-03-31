#include <cstdio>
#include <cmath>

unsigned long long cnt=0;
int N;

int main()
{
	unsigned int** cost;
	int i,j;

	scanf("%d%*c",&N);

	cost = (unsigned int**)malloc(sizeof(unsigned int*)*N);
	for(i=0;i<N;i++)
		cost[i] = (unsigned int*)malloc(sizeof(unsigned int)*10);
	
	//10의자리(N-2) setting
	for(i=0;i<=9;i++)
		cost[N-1][i] = 1;

	for(i=1;i<N;i++)
		for(j=0;j<10;j++)
		{
			if(j==0)
			{
				cost[N-1-i][j] = cost[N-i][j+1]%1000000000;
			}
			else if(j==9)
			{
				cost[N-1-i][j] = cost[N-i][j-1]%1000000000;
			}
			else
			{
				cost[N-1-i][j] = (cost[N-i][j-1] + cost[N-i][j+1])%1000000000;
			}
		}

	for(i=1;i<10;i++)
		cnt = (cnt + cost[0][i])%1000000000;
	printf("%lld\n",cnt%1000000000);
	
	return 0;
}

