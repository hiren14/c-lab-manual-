#include<stdio.h>
#include<string.h>
/*aim---Define a structure
type struct personal
that would contain person name,
 date of joining and salary using this structure to read this information of 5 people and print the same on screen.
*/
struct person
{
    char name[50];
    char doj[50];
    int salary;
} p[5];
int main() {
    for(int i=0; i<5; i++)
    {
        printf("enter the name ");
        scanf("%s",p[i].name);
        printf("enter the joing date  ");
        scanf("%s",p[i].doj);

        printf("\n Enter Person Salary : ");
        scanf("%f",&p[i].salary);
    }
    for(int i=0; i<5; i++)
    {
        printf("\n Person %d Detail",i+1);
        printf("\n Name   = %s",p[i].name);
        printf("\n DOJ    = %s",p[i].doj);
        printf("\n Salary = %.2f",p[i].salary);
    }
    //printf("Hello world!");
    return 0;
}
