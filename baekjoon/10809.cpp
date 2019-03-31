#include <iostream>
#include <string>

using namespace std;

int main()
{
	int ary[26],position;

	for (int i = 0;i < 26;i++)
	{
		ary[i] = -1;
	}

	string word;
	getline(cin, word);
	
	for (int i = 0;i < word.length();i++)
	{
		if (word[i] == NULL)
		{
			break;
		}
		position = (word[i] - 97);
		
		if (ary[position] == -1) {
			ary[position] = i;
		}
	}

	for (int i = 0;i < 25;i++)
	{
		printf("%d ", ary[i]);
	}

	printf("%d", ary[25]);

	return 0;
}