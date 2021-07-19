/*PATRICIAL NO 29
AIM--'Write a program to find
 factorial of a number
 using recursion. */
#include<stdio.h>
int fact(int);
int main()
{   int n;
    printf("enter the no.");
    scanf("%d",&n);
    printf("the fact is %d",fact(n));
    return 0;
}
int fact(int n)
{   if(n==0)
    {
        return 1;
    }

    return n*fact(n-1);
}
