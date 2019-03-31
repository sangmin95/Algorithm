#include <iostream>

int N;

int main()
{
	long long* cnt;

	scanf("%d",&N);
	getchar();
	
	cnt = (long long*)malloc(sizeof(long long)*N);
	
	for(int i=0;i<N;i++)
	{
		if(i==0) cnt[i] = 1;
		if(i==1) cnt[i] = 1;
		if(i>1)
		{
			cnt[i] = cnt[i-1]+cnt[i-2];
		}
	}

	printf("%lld\n",cnt[N-1]);

	return 0;
}

