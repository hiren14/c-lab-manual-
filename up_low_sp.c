/*PRACTICAL NO.9
AIM : Write a C program to check whether the entered character is capital, small letter, digit or any special character.
//file name --- uo_low_sp.c*/
#include<stdio.h>
int main()
{
char a;
printf("enter the alphabet")
    scanf("%c",&a);
    if(a>=65 && a<=90)
    printf("upper case");
   else if(a>=97 && a<=127)
printf("lower case ");
else if(a>=48&&a<=57)
printf("a numerical value");
else
printf("a special character");
    return 0;
}
