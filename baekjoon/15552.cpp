#include <stdio.h>

int TC;

int main()
{
	int a,b;
	
	scanf("%d%*c",&TC);
	while(TC--)
	{
		scanf("%d %d%*c",&a,&b);
		printf("%d\n",a+b);
	}
}
