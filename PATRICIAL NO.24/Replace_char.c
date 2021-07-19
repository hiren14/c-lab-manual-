/*PATRICIAL NO 25
Aim :-- Write a program to replace a character 
in given string*/
#include <stdio.h>
#include <string.h>
void replacechar (char *s, char c1, char c2)//define a function 
{
 int i = 0;
 for (i = 0; s[i]; i++)
 {
 if (s[i] == c1)
{
 s[i] = c2;
}
 }
}
int
main ()
{
 char s[1000], c1, c2;
 printf ("Enter the string : ");
 gets (s);
 printf ("Enter a character replace: ");
 c1 = getchar ();
 getchar ();
 printf ("\nEnter character to replace with %c : ", c1);
 c2 = getchar ();
 printf ("\n before replace:%s", s);
 replacechar (s, c1, c2);//call the function 
 printf ("\nafter replace:%s", s);
 return 0;
}
