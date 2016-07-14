/*Write a program that prints a staircase of size n .*/


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
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
        for(int k=n;k>=i;k--)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}

