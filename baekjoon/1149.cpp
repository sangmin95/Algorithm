#include <iostream>
#include <algorithm>
#define R 0
#define G 1
#define B 2


using namespace std;

int N;

int main()
{
	int i=0;
	int** min_cost;
	int** house;
	
	scanf("%d",&N);
	getchar();

	house = (int**)malloc(sizeof(int*)*N);
	for(i=0;i<N;i++)
		house[i] = (int*)malloc(sizeof(int)*3);
	
	min_cost = (int**)malloc(sizeof(int*)*N);
	for(i=0;i<N;i++)
		min_cost[i]=(int*)malloc(sizeof(int)*3);

	for(i=0;i<N;i++)
	{	
		scanf("%d %d %d",&house[i][R],&house[i][G],&house[i][B]);	
		getchar();
	}

	for(i=0;i<N;i++)
	{
		if(i==0)
		{
			min_cost[i][R] = house[i][R];
			min_cost[i][G] = house[i][G];
			min_cost[i][B] = house[i][B];
		}
		else
		{
			min_cost[i][R] = min(min_cost[i-1][G],min_cost[i-1][B])+house[i][R];
			min_cost[i][G] = min(min_cost[i-1][R],min_cost[i-1][B])+house[i][G];
			min_cost[i][B] = min(min_cost[i-1][R],min_cost[i-1][G])+house[i][B];
		}
	}

	printf("%d\n",min({min_cost[N-1][R],min_cost[N-1][G],min_cost[N-1][B]}));
	
	
	return 0;
}
