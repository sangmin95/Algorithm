#include <cstdio>
#include <unistd.h>

int main()
{
	int read_size;
	char buf[11];
	while(read_size=read(0,buf,10))
	{
		for(int i=0;i<read_size;i++)
		{
			if(buf[i] == '\n'){
				printf("\n");
				return 0;
			}
			printf("%c",buf[i]);
		}
		printf("\n");
	}
	return 0;
}
