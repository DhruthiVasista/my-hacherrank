/*Given a time in AM/PM format, convert it to military (24-hour) time.*/



#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* time = (char *)malloc(10240 * sizeof(char));

    scanf("%s",time);

    if((time[0] == '1') && (time[1] == '2') && (time[8] == 'A'))
    {

        time[0] ='0' ;
        time[1] ='0' ;
        time[8] = '\0';
        time[9] = '\0';

    }
    else if(time[8] == 'A')
    {
        time[8] = '\0';
        time[9] = '\0';

    }
    else{
        if(time[8] == 'P')
        {
            if((time[0] == '1') && (time[1] == '2'))
            {
                time[8] = '\0';
                time[9] = '\0';

            }
            else{
                time[1] = (int)time[1]+12;
                time[8]='\0';
                time[9]='\0';
            }
        }

        if(((int)time[1] > 9)&& (time[0] != '1') ||(time[1] != '2')&&(time[8] != 'P'))
        {
            (int)time[0]++;
            time[1]= (int)time[1] - 10;

        }

    }
    printf("%s", time);


    return 0;
}

