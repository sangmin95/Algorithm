#include <iostream>
#include <vector>

using namespace std;

int TC;
vector<int> scores;
double average(vector<int> scores);

int main(){
	int N,score,cnt=0;
	double avg;

	scanf("%d%*c",&TC);
	
	while(TC--){
	
		cnt=0;
		scores.clear();
		scanf("%d",&N);
		while(N--){
			scanf("%d",&score);
			scores.push_back(score);
		}

		avg = average(scores);
		for(int i=0;i<scores.size();i++)
		{
			if(scores.at(i) > avg)
				cnt++;
		}
		printf("%.3lf%%\n",((double)cnt)/((double)scores.size())*100);
	
	}
	return 0;
}

double average(vector<int> scores)
{
	double avg=0.0;

	for(int i=0;i<scores.size();i++)
	{
		avg += scores.at(i);
	}

	return (double)(avg/scores.size());
}
