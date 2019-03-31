#include <iostream>
//TC, k = floor, n = room#
int TC,k,n;
int** apartment;

int main(){

    scanf("%d%*c",&TC);
    while(TC--){
        scanf("%d%*c",&k);
        scanf("%d%*c",&n);

        apartment = (int**)malloc(sizeof(int*)*(k+1));
        for(int i=0;i<=k;i++)
            apartment[i] = (int*)malloc(sizeof(int)*(n+1));

        for(int i=0;i<=k;i++){   
            for(int j=1;j<=n;j++){
                if(i==0)    apartment[i][j] = j;
                else if(j==1)   apartment[i][j] = j;
                else    apartment[i][j] = apartment[i-1][j] + apartment[i][j-1];
            }
        }

        printf("%d\n",apartment[k][n]);
        free(apartment);
    }
    return 0;
}