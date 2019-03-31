#include <iostream>
#define MAX 1000001

using namespace std;
char str[MAX];

int count_space(char* str);

int main()
{
	int cnt;

	cin.getline(str,MAX);
	cnt = count_space(str);
	printf("%d\n",cnt);


	return 0;
}

int count_space(char* str)
{
	int cnt=1,i;

	for(i=0;i<MAX;i++){
		if(i==0 && str[i] == '\0') return 0;
		if(i==0 && str[i] == ' ') cnt=0;
		if(str[i] == '\0')	break;
		if(str[i] == ' ') cnt++;
	}
	if(str[i-1] == ' ') cnt--;

	return cnt;
}

