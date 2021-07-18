/*PRACTICAL NO.10
Aim : Write a program to read marks from keyboard and your program should display equivalent grade according to following table(if else ladder).
//file name --- Grade.c*/
#include<stdio.h>
int main()
{
int marks;
printf("ENTR THE MARKS OBTAINED IN EXAM out of \"100\" \n");
    scanf("%d",&marks);
    if(marks<=100&&marks>=80)
    {
   printf("you are pass with Distinction");
    }
    
    else if(marks>=60&&marks<=79)
    {
    printf("you are pass with First Class ");
    }
    else if(marks>=40&&marks<=59)
   {printf("you are pass with second Class ");
   }
else if(marks<=33)
{
printf("you are fail");
}
    return 0;
}
