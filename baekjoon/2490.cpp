#include <iostream>

int main()
{
	int a,b,c,d,tc=3,sum;
	while(tc--)
	{
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		scanf("%d%*c",&d);
		sum = a+b+c+d;
		switch(sum)
		{
		case 1 : printf("C\n");
				 break;
		case 2: printf("B\n");
				break;
		case 3: printf("A\n");
				break;
		case 4: printf("E\n");
				break;
		case 0 : printf("D\n");
		}
	}


	return 0;
}
