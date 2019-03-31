#include <iostream>

int N;

int main()
{
	int level = 0, room_cnt = 1;

	scanf("%d%*c",&N);
	
	while(N > room_cnt){
		level++;
		room_cnt = room_cnt + level*6;
	}

	printf("%d\n",level+1);

	return 0;
}
