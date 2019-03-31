#include <iostream>
#include <cstring>

using namespace std;

typedef struct _Telephone{
	int start;
	int end;
	int time=2;
}Telephone;

Telephone telephone[10];

int main(){

	string input;
	int spent_time = 0;

	for(int i=2;i<=9;i++){
		telephone[i].time = telephone[i-1].time+1;
	//	printf("telephone[%d].time = %d\n",i,telephone[i].time);
	}
	telephone[2].start = 'A'; telephone[2].end = 'C';
	telephone[3].start = 'D'; telephone[3].end = 'F';
	telephone[4].start = 'G'; telephone[4].end = 'I';
	telephone[5].start = 'J'; telephone[5].end = 'L';
	telephone[6].start = 'M'; telephone[6].end = 'O';
	telephone[7].start = 'P'; telephone[7].end = 'S';
	telephone[8].start = 'T'; telephone[8].end = 'V';
	telephone[9].start = 'W'; telephone[9].end = 'Z';
	
	cin >> input;

	for(int i=0;i<input.size();i++){
		for(int j=2;j<=9;j++){
			if(telephone[j].start <= input.at(i)){
				if(telephone[j].end >= input.at(i)){
					spent_time += telephone[j].time;
				//	printf("[%d] = %d\n",j,spent_time);
					break;
				}
			}
		}
	}
	
	printf("%d\n",spent_time);


	return 0;
}
