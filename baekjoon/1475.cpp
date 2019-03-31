#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;
int N;

int main(){

    int most=0;
    scanf("%d%*c",&N);
    vector<int> sticker (10,0);

    while(N>=0){
        sticker.at(N%10)++;
        N = N/10;
        if(N==0) break;
    }

    sticker.at(6) = sticker.at(6) + sticker.at(9) + 1; // 올림하기위해 +1
    sticker.at(6) /= 2;

    //[1,9)
    for(int i=1;i<9;i++){
        if(sticker.at(most) < sticker.at(i))
            most = i;    
    }

    printf("%d",sticker.at(most));
    

    return 0;
}
