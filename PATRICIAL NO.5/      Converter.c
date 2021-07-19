//Aim: Write a C program to enter a distance into kilometre and convert it in to meter, feet, inches and centimetre.
//converter.c
#include <stdio.h> 
int main()
{ 
float km,m,in,cm,foot;
 char c; 
printf("Do you want to do into meter\"(m)\", foot\"(f)\", centimetre\"(c)\" or inches\"(n)\" ");
 scanf("%c", &c); //enter Character variable to operate 
printf("\nEnter the kilometer: "); 
scanf("%f", &km); 
m=km*1000;
foot=km*3280.83;
cm=km*100000;
in=km*39370.08;
//enter first number 
// //enter second number 
switch(c)
{ //Switch-Case statement to return differentiate result by condition 
case 'm':printf(" the value of km in m is =%f",m);
 break;
 case 'f':printf(" the value of km in foot is =%f",foot);
 break;
 case 'c':printf("the value of km in m is =%f",cm);
 break;
 case 'n':printf(" the value of Km in in is =%f",in);
break; 
default: printf("The operation \"%c\" isn't exists.", c);
 break;
 }
