#include <iostream>

using namespace std;

int main() {

    int N;
    long long* cache;

    scanf("%d%*c",&N);
    cache = new long long[N+1];


    for(int i=1;i<N+1;i++){

        if(i==1){
            cache[1] = 1;
            continue;
        }

        if(i==2){
            cache[2] = 3;
            continue;
        }

        cache[i] = (cache[i-1]+ 2*cache[i-2])%10007;
    }

    printf("%lld\n",cache[N]);
    free(cache);

    return 0;
}