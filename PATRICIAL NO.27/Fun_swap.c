/*PATRICIAL NO 27
AIM--Write a function
Exchange to interchange
the values of two variables,
 say x and y. illustrate the
use of this function
 in a calling function .*/
#include<stdio.h>
void swap(int *,int *);
int main()
{
    int n1,n2;
    printf("enter 1st value ");
    scanf("%d",&n1);
    printf("\nenter 2 value ");
    scanf("%d",&n2);
    printf("\nbefore swap is n1 %d \nand n2 %d\n",n1,n2);
//printf("Hello world!");
    swap(&n1,&n2);
    printf("\nafter swap n is %d \n and n2 is %d",n1,n2);
    return 0;
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
