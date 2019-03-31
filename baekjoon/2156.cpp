#include <cstdio>
#include <cstdlib>
#include <algorithm>

int N;

int main()
{
	int* cup;
	int* cost;

	scanf("%d%*c",&N);
	cup = (int*)malloc(sizeof(int)*N);
	cost = (int*)malloc(sizeof(int)*N);

	for(int i=0;i<N;i++)
		scanf("%d%*c",&cup[i]);
	
	for(int i=0;i<N;i++)
	{
		if(i==0)
		{
			cost[i] = cup[i];
			continue;
		}

		if(i==1)
		{
			cost[i] = cost[i-1]+cup[i];
			continue;
		}

		if(i==2)
		{
			cost[i] = std::max({cup[i-1]+cup[i],cup[i-2]+cup[i],cost[i-1]});
			continue;
		}

		cost[i] = std::max({cost[i-3]+cup[i-1]+cup[i],cost[i-2]+cup[i],cost[i-1]});

	}

	printf("%d",cost[N-1]);
	return 0;
	
}
