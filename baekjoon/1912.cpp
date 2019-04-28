#include <iostream>
#include <cstring>

using namespace std;


int main() {

    int N, maxSum = 0, nowSum = 0;
    int *sequence;
    int *cache;


    scanf("%d%*c", &N);
    sequence = new int[N];
    cache = new int[N];
    memset(cache, -1, sizeof(cache));

    for (int i = 0; i < N; i++) {
        scanf("%d", &sequence[i]);
    }

    for (int i = 0; i < N; i++) {
        if (i == 0) {
            maxSum = sequence[i];
            cache[i] = sequence[i];
            continue;
        }

        if(maxSum < sequence[i]) maxSum = sequence[i];

        nowSum = cache[i - 1] + sequence[i];

        if (nowSum > 0) {
            cache[i] = nowSum;
        } else {
            cache[i] = 0;
        }

        if (nowSum > maxSum) maxSum = nowSum;
    }

    printf("%d", maxSum);

    return 0;
}
