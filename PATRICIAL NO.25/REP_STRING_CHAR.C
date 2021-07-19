/*PATRICIAL NO 25
  AIM:-- Write a program to replace a
character in given string */
#include<stdio.h>
    #include<string.h>
    int main() {
char str[99]; int len,i;
    printf("Program in C for reversing a given string \n "); 
    printf("Please insert the string you want to reverse: "); 
    gets(str); len=strlen(str); 
    for(i=len;i>=0;i--)
{
printf("%c",str[i]); }
//printf("Hello world!"); 
			
			return 0;
}
