#include <iostream>
#include <vector>

using namespace std;
vector<int> notes;

void check();

int main(){

	int num;

	for(int i=0;i<8;i++){
		scanf("%d",&num);
		notes.push_back(num);
	}
	check();
}

void check(){

	int ascending=1, descending=8;
	bool check_ascending = true, check_descending = true;
	for(int i=0;i<8;i++){
		if(ascending == notes.at(i))	ascending++;
		else check_ascending = false;

		if(descending == notes.at(i))	descending--;	
		else check_descending = false;
	}

	if(check_ascending) printf("ascending\n");
	else if(check_descending) printf("descending\n");
	else printf("mixed\n");

}
