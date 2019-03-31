#include <iostream>
#include <vector>

using namespace std;
int N=5;

int main(){
	int score,sum=0;

	for(int i=0;i<N;i++){
		scanf("%d",&score);
		if(score<40) score = 40;
		sum = sum + score;
	}

	printf("%d",sum/N);
	return 0;
}
