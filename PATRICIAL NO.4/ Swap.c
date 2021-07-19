//Aim: Write a C program to interchange two numbers.
//file name swap.c
#include<stdio.h>

int main()
{
    int a,b;
    printf("enter the  value of a=" );
    scanf("%d",&a);
    printf("enter the  value of b" );
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value after swapping of a is %d and b is %d",a,b);
    return 0;
}
