#include <iostream>

int N;

int main(){

	int sequence=0,i;
	
	scanf("%d%*c",&N);
	
	for(i=1;sequence < N;i++)	sequence = i*(i+1)/2;
	i--;

	int numerator,denominator;

	if(i%2 == 0){

		numerator = i-(sequence-N);	
		denominator = i+1-numerator;

	}
	else{

		denominator = i-(sequence-N);
		numerator = i+1-denominator;
	}

	printf("%d/%d",numerator,denominator);

	return 0;
}
