
 /*ABCDE
ABCD
ABC
AB
A*/
//23
PRACTICAL NO.22

#include <stdio.h>
int main()
{   int i, j;
    for(i=1; i<=5; i++)
    {   for(j=5; j>=i; j--)
        {
            printf("%c",'A'-1 + i);
        }
        printf("\n");
    }
    return 0;
    ---------------------------------------------------
} 
/*ABCDEF
ABCDE
ABCD
ABC
AB
A */
#include <stdio.h>
int main()
{   int i, j;
    for(i=0; i<=5; ++i)
    {   for(j=0; j<=5-i;++j)
        {
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;
}
 


