#include<stdio.h>

int main()
{
    int n1,n2,temp;
    int *a,*b;
    printf("\nenter two no");
    scanf("%d%d",&n1,&n2);
    printf("\nthe value before swap is n1 =%d n2=%d\n",n1,n2);
    a=&n1;
    b=&n2;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("AFTER SWAP N1 %d n2 %d",n1,n2);

// printf("Hello world!");
    return 0;
}
