#include <iostream>
#include <vector>

using namespace std;

vector<int> nums(10,0);

int main(){
	int A,B,C,result;

	scanf("%d%*c",&A);
	scanf("%d%*c",&B);
	scanf("%d%*c",&C);

	result = A*B*C;
	
	while(result/10 != 0){
		nums.at(result%10)++;
		result /= 10;
	}
	nums.at(result)++;

	for(int i=0;i<10;i++)	printf("%d\n",nums.at(i));


	return 0;
}
