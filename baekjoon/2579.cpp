#include <iostream>

int N;
int* stair;
int* score;

int main()
{

	scanf("%d",&N);
	getchar();

	stair = (int*)malloc(sizeof(int)*N);
	score = (int*)malloc(sizeof(int)*N);

	for(int i=0;i<N;i++)
	{
		scanf("%d",&stair[i]);
		getchar();
	}
	
	for(int i=0;i<N;i++)
	{
		if(i==0)
		{
			score[i] = stair[i];
			continue;
		}
		
		if(i==1)
		{
			score[i] = stair[i-1]+stair[i];
			continue;
		}

		if(i==2)
		{
			score[i] = std::max(score[i-2]+stair[i],stair[i-1]+stair[i]);
			continue;
		}
		
		score[i] = std::max(score[i-2]+stair[i],score[i-3]+stair[i-1]+stair[i]);
		
	}
	printf("%d\n",score[N-1]);
	
	return 0;
}
