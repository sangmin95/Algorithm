#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <deque>
#include <vector>
#include <string>
#include <cstring>

using namespace std;
int TC, p, n;
deque<int>::iterator iter;
void AC(string& p,deque<int> DQ);

int main()
{
	string p;
	char input[1000000];
	cin >> TC;

	while (TC--)
	{
		cin >> p;
		cin >> n;
		scanf("%s", input);
		char *token = strtok(input, "[],");
		deque<int> DQ;
		while (token != NULL) {
			DQ.push_back(atoi(token));
			token = strtok(NULL, "[],");
		}
		AC(p,DQ);
	}

}

void AC(string& p,deque<int> DQ)
{
	int Rcnt=0;

	for (unsigned int i=0;i<p.length();++i) {
		if (p[i] == 'R'){
			Rcnt++;			
		}
		else if (p[i] == 'D'){
			if (DQ.size() == 0) {
				printf("error\n");
				return;
			}

			if (Rcnt == 0 || Rcnt % 2 == 0){
				DQ.pop_front();
			}
			else {
				DQ.pop_back();
			}
		}
		else
		{
			printf("error\n");
			return ;
		}
	}

	if (Rcnt % 2 != 0)
	{
		reverse(DQ.begin(), DQ.end());
	}

	
	printf("[");
	
	for (deque<int>::iterator iter=DQ.begin();iter!=DQ.end();iter++)
	{
		if (iter == DQ.end()-1)
		{
			cout << *iter;
			break;
		}
		cout << *iter << ",";
	}

	printf("]\n");

}