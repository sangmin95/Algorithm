#include <iostream>

using namespace std;

int nums[2];
int N,cnt=0;

int cycle(int* nums);

int main()
{
	int temp=0;

	scanf("%d%*c",&N);	
	if(N<10) {  nums[0] = 0; nums[1] = N;  }
	else {	nums[0] = N/10;	nums[1] = N%10; }
			
	while(1){
		
		temp = cycle(nums);
		if(temp < 10)	{nums[0] = 0; nums[1] = temp;}
		else	{nums[0]=temp/10; nums[1] = temp%10;}
	
		if(temp == N){
			printf("%d\n",cnt);
			return 0;
		}
	}

	return 0;
}

int cycle(int* nums)
{
	int num;
	num = (nums[0]+nums[1])%10+(10*nums[1]);
	
	if(num < 10)	{nums[0] = 0; nums[1] = num;}
	else	{nums[0]=num/10; nums[1] = num%10;}
	
	cnt++;
	return num;
}
