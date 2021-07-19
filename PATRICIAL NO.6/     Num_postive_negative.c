//PRACTICAL NO 6
//Aim: to find  a is positive negative or equal to 0
//num_case.c

#include<stdio.h>
int main()
{
float  num;
printf("ENTER THE VALUE WHICH YOU WANT TO +ve no. Or -ve no. Ir equal to 0");
    scanf("%f",&num);
    if(num>0)
    {
    printf("the num Is positively");
    }
    else if(num<0)
    {
    printf("the num is _-ve");
    }
    else if(num==0)
    printf("the num zero");
    return 0;
}
