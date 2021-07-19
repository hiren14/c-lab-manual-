/*PATRICIAL NO 30
AIM-- Write a function
that will scan a character
string passed as an argument
and convert all lowercase
character into their uppercase
equivalents.*/
#include<stdio.h>
void upper(char[]);
int main()
{
    char str[20];
    printf("enter your string \n");
    gets(str);
    upper(str);
    return 0;
}
void upper(char str[20])
{   int i;
    printf("%s the string in upper case is",str);
    for(i=0; str[i]; i++)
    {
        if(str[i]>96 && str[i]<123)
            str[i]-=32;
    }
    printf("%s\n",str);
}
