#include <iostream>
#include <vector>

using namespace std;
vector<bool> result;
vector<int> scores;
int N;
int compute();

int main()
{
	char c;
	scanf("%d%*c",&N);
	while(N--){
		while(scanf("%c",&c)){
		if(c=='O')	result.push_back(true);
		if(c=='X')	result.push_back(false);
		if(c=='\n')	break;	
		}
		printf("%d\n",compute());	
		result.clear();
		scores.clear();
	}

	return 0;
}

int compute(){
	
	int i,score=0,sum=0;

	for(i=0;i<result.size();i++){
		if(result.at(i)){
			score++;
			sum = sum+score;
			scores.push_back(score);
		}
		else{
			score=0;
			scores.push_back(score);
		}
	}

	return sum;
}
