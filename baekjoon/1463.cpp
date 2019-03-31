#include <iostream>

int* cost;
int N;

int main()
{
	int i;

	scanf("%d",&N);
	getchar();

	cost = (int*)malloc(sizeof(int)*(N+1));

	for(i=1;i<=N;i++)
	{
		if(i==1)
		{
			cost[i]=0;
			continue;
		}
		cost[i] = cost[i-1]+1;

		if(i%3 == 0)
		{
			cost[i] = std::min(cost[i/3]+1,cost[i]);
		}

		if(i%2 == 0)
		{
			cost[i] = std::min(cost[i/2]+1,cost[i]);
		}
	
	}
	
	printf("%d\n",cost[N]);

	return 0;
}
