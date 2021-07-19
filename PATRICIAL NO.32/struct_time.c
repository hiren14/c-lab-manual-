/*PATRICIAL NO.32
Aim--Define structure
 data type called time_struct
containing three member’s
integer hour, integer minute and
 integer second.
 Develop a program that would
assign values to the individual
 number and display the time in
the following format: 16: 40:51.*/


#include<stdio.h>
struct time
{
    int hr;
    int min;
    int sec;
} t;
int main()
{
    printf("\n ENTER THE HOURS ");
    scanf("%d",&t.hr);
    printf("\n ENTER THE MIN ");
    scanf("%d",&t.min);
    printf("\n ENTER THE SEC ");
    scanf("%d",&t.sec);

    printf("\n Time %d:%d:%d",t.hr%24,t.min%60,t.sec%60);


    //printf("Hello world!");
    return 0;
}
