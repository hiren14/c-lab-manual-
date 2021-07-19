#include<stdio.h>
#include<string.h>
int main()
{
    int i;
printf("enter your string  ");
    char str[30];
    gets(str);
    //="hi there my self hiren";
    char *ptr=str;
    int len;
    len=strlen(str);
    for(i=0; i<len; i++)
    {
        printf("%c",str[i]);
    }
    //for address
    printf("\nthe address of stritrng are ");
    for(i=0; i<len; i++)
    {
        printf("\n%p",&str[i]);
    }

    return 0;
}
