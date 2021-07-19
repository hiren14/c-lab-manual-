#include<stdio.h>
//Design a structure  to contain name,
//branch and total marks obtained.
// Develop a program to read data for 10 students
// in a class and print them.
struct student_record
{
    char name[50];
    char branch[50];
    int total;
}p[10];
int main()
{
    int n=10;
    int i=0;
    for(i=0; i<n; i++)
    {
        printf("ENTER THE NAME ");
        scanf("%s",&p[i].name);
        printf("ENTER THE BRANCH ");
        scanf("%s",&p[i].branch);
        printf("ENTER THE TOTAL_MARKS ");
        scanf("%d",&p[i].total);
    }
//printing

    for(i=0; i<n; i++)
    {
        printf("STUDENTS DETAILS %d",i+1);
        printf("\n NAME %s",p[i].name);
        printf("\n BRANCH %s ",p[i].branch);
        printf("\n total %d",p[i].total);
    }

    //printf("Hello world!");
    return 0;
}
