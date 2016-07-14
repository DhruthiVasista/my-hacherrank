/*diagonal difference of a given square matrix*/





#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int a[n][n];
    int sum1 = 0;
    int sum2 = 0;
    int res = 0;
    for(int a_i = 0; a_i < n; a_i++){
        for(int a_j = 0; a_j < n; a_j++){

            scanf("%d",&a[a_i][a_j]);
        }
    }
    for(int i = 0 ; i < n; i++){
        sum1 += a[i][i];
        sum2 += a[i][n-i-1];
    }
    res = abs(sum1-sum2);

    printf("%d", res);
    return 0;
}

