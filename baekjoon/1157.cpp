#include <iostream>
#include <cstring>
#include <ctype.h>
#define LENGTH 1000001
int main()
{
	std::ios::sync_with_stdio(false);
	char str[LENGTH];
	bool Qmark=false; 
	int alphabets[26] = {0};
	int index=0,max=0,now;
	int length;

	std::cin >> str;

	length=strlen(str);

	for(int i=0;i<length;i++)
	{
		if(str[i] <= 'z' && str[i] >= 'a')
			str[i] = toupper(str[i]);
		now=str[i]-'A';
		alphabets[now]=alphabets[now]+1;
	}

	max=alphabets[0];

	for(int i=1;i<26;i++)
	{
		if(alphabets[i] > max)
		{
			max=alphabets[i];
			index=i;
			Qmark=false;
		}
		else if(alphabets[i] == max)
		{
			Qmark=true;
		}
	}

	if(Qmark)
		printf("?\n");
	else
		printf("%c\n",index+'A');
}

