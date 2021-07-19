/*PATRICIAL NO 11
AIM Write a C program to read no 1 to 7 and print relatively day Sunday to Saturday. 12. 
//file name--- weekdays.c*/
#include <stdio.h>
 int main() 
{ int weekday; 
printf(" Please Enter the Day Number 1 to 7 (Consider 1= SUNDAY, and 7 = SATURDAY) : "); 
scanf("%d", &weekday);
 if (weekday == 2)
 {     printf("\n Today is Monday");    
  } else if ( weekday == 3 )
 {     printf("\n Today is Tuesday");      } 
else if ( weekday == 4 )
 {     printf("\n Today is Wednesday");      }
 else if ( weekday == 5 ) {     printf("\n Today is Thursday");      }
 else if ( weekday == 6 ) 
{     printf("\n Today is Friday");      } 
else if ( weekday == 7) {     printf("\n Today is Saturday");      } 
else if ( weekday == 1 ) {     printf("\n Today is Sunday");      }
 else printf("\n Please enter Valid Number between 1 to 7");
return 0;}
