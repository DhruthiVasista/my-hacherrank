/*There are two kangaroos on an x-axis ready to jump in the positive direction (i.e, toward positive infinity). The first kangaroo starts at location  and moves at a rate of  meters per jump. The second kangaroo starts at location x1  and moves at a rate of v1  meters per jump. Given the starting locations x2 and movement rates v1 for each kangaroo, can you determine if they'll ever land at the same location at the same time?*/


#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int x1; 
    int v1; 
    int x2; 
    int v2; 
    int count = 0;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);

    for(int i = 0; i< 10000; i++)
    {
        x1 += v1;
        x2 += v2;
        if(x1 == x2)
        {
            count = 1;
            break;
        }
        else{
            count++;
        }
    }
    if(count == 1)
    {
        printf("YES");

    }
    else{
        printf("NO");
    }

    return 0;
}

