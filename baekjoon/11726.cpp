#include <iostream>

using namespace std;

int N;
unsigned long long arr_mem[1001];

int main(){

    scanf("%d%*c",&N);
    arr_mem[1] = 1;
    arr_mem[2] = 2;

    for(int i=3;i<=N;i++){
        arr_mem[i] = (arr_mem[i-2] + arr_mem[i-1])%10007;
    }

    cout << arr_mem[N] << endl;

    return 0;
}