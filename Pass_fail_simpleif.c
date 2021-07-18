//Aim: Write a program to read marks of a student from keyboard whether the student is pass or fail (using if else).
/*
TO CHECK WHETHER A STUDENT IS PASS 
OR FAIL
*/
//File name pass_fail.c
#include<stdio.h>
int main()
{
int marks;
printf("ENTR THE MARKS OBTAINED IN EXAM out of \"100\" \n");
    scanf("%d",&marks);
    //condition operator if marks>=35 pass
    if(marks>=33)
    {
   printf("you are pass ");
    }
    else
    {
    printf("you are fail ");
    }
    return 0;
}
