#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string num1, num2;

int main(){
	
	int num_1,num_2;

	cin >> num1;
	cin >> num2;

	reverse(num1.begin(),num1.end());
	reverse(num2.begin(),num2.end());

	num_1 = stoi(num1);
	num_2 = stoi(num2);

	if(num_1 < num_2)	printf("%d\n",num_2);
	else	printf("%d\n",num_1);


	return 0;
}
