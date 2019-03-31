#include <iostream>
#include <cstring>

using namespace std;
int N,cnt=0;
bool alphabets[26];

bool group_word(string word);
void set_false();

int main()
{
	string word;
	scanf("%d%*c",&N);
	
	while(N--){
		cin >> word;
		if(group_word(word))	cnt++;

	}

	printf("%d",cnt);

	return 0;
}

void set_false()
{
	for(int i=0;i<26;i++){
		alphabets[i] = false;
	}
}

bool group_word(string word)
{
	int now,before,word_length;
	set_false();
	word_length = word.length();

	if(word_length == 1)	return true;
	
	now = word.at(0)-'a';

	for(int i=1;i<word_length;i++){
		before = now;
		now = word.at(i)-'a';

		if(now != before){
			alphabets[before] = true;
			if(alphabets[now] == true)	return false;
		}
	}
	return true;
}

