/*AIM:. Write a program to evaluate the
series 1^2+2^2+3^2+……+n^2*/

#include<stdio.h>
//sum if square of no. 
int
main ()
{
  int n, sum, a;
  printf ("series 1^2+2^2+3^2+b %dn^2  \n",n);
  printf ("enter the last term of series ");
  scanf ("%d", &n);
  sum = (n * (n + 1) * (2 * n + 1)) * 0.1666666667;


  printf ("the sum of series is. series 1^2+2^2+3^2+b &b &+%d^2 is =%d  ", n,
	  sum);
  // printf("Hello world!");
  return 0;
}
