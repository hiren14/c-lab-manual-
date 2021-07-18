
#include<stdio.h> //pattern 1 upper tri
int main() {int n,i,j;
printf("enter a value of pattern you want to print ");
scanf("%d",&n); 
for(i=1;i<=n;i++) 
{ //printf(" "); 
for(j=1;j<=i;j++)
{
printf("*"); }
printf("\n"); } return 0;
}
---------------------------
#include <stdio.h>//middle 
int main ()
{
  int n, m;
  printf ("Enter the number of rows");
  scanf ("%d", &n);
  m = n;
  for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= m - 1; j++)
	{
	  printf (" ");
	}
      for (int k = 1; k <= 2 * i - 1; k++)
	{
	  printf ("*");
	}
      m--;

      printf ("\n");
    }
  return 0;
}________________________________________________

#include<stdio.h> //pattern 3//lower 
int main()
 {int n,i,j;
printf("enter a value of pattern you want to print "); scanf("%d",&n);
 for(i=n;i>=1;i--)
 { for(j=i;j>=1;j--) {
printf("*"); }
printf("\n"); } return 0
