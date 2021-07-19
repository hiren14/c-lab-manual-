/*PATRICIAL NO 26
AIM---Write a function
 in the program to
return 1 if number
is prime otherwise return 0.*/
#include<stdio.h>
int prime(v);
int main() {
    int n,p;
    printf("enter a number");
    scanf("%d",&n);
    p=prime(n);
    if(p==1) {
        printf("%d is a prime no \n",n);
    }
    else {
        printf("%d is not a prime no \n",n);
    } //printf("Hello world!");
    return 0;
}
int prime(int n)
{
    int i;
    for(i=2; i<n; i++)
    {
        if(n % i==0)
        {
            return 0;
        }
    }
    return 1;
}
