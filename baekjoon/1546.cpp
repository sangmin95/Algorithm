#include <iostream>
#include <vector>

using namespace std;

int N;
vector<double> scores;

double average(double max);

int main()
{
	double score,max = 0.0;
	scanf("%d%*c",&N);
		
	while(N--){
		scanf("%lf",&score);
		scores.push_back(score);
		if(max < score) max = score;
	}

	printf("%.2lf\n",average(max));

	return 0;

}

double average(double max){
	
	double sum=0.0;

	for(int i=0;i<scores.size();i++){
		sum += scores.at(i)/max * 100.0;
	}
	return sum/(double)scores.size();
}
