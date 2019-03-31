#include <iostream>

int N;

int main()
{
	int** input;
	int** sum;
	int parent_index,max_value = 0;
	
	scanf("%d",&N);
	getchar();
	
	input = (int**)malloc(sizeof(int*)*N);
	sum = (int**)malloc(sizeof(int*)*N);
	for(int i=0;i<N;i++)
	{
		input[i] = (int*)malloc(sizeof(int)*(i+1));
		sum[i] = (int*)malloc(sizeof(int)*(i+1));
	}

	//get input
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<=i;j++)
			scanf("%d",&input[i][j]);
		getchar();
	}

	
	for(int i=0;i<N;i++)
	{
		if(i==0)	sum[i][0] = input[i][0];

		if(i>0)
		{
			for(int j=0;j<=i;j++)
			{
				if(j==0)
				{
					sum[i][j] = sum[i-1][j] + input[i][j];
				}
				else if(j==i)
				{
					sum[i][j] = sum[i-1][j-1] + input[i][j];
				}
				else
				{
					sum[i][j] = std::max(sum[i-1][j-1],sum[i-1][j])+input[i][j];
				}
			}
		}
	}

	for(int i=0;i<N;i++)
	{
		if(max_value < sum[N-1][i])
			max_value = sum[N-1][i];
	}

	printf("%d\n",max_value);
	

	return 0;
}
