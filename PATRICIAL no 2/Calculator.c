//PRACTICAL NO2 
//File name calculator.c
/*Aim: Write a program to that performs as calculator 
(addition, multiplication, division, subtraction). */
#include <stdio.h> 
int main() 
{ float first_num, second_num;  
 char c;  
 printf("Do you want to do addition(+), subtraction(-), multiplication(*) or division(/)? "); 
 scanf("%c", &c); //enter Character variable to operate 
 printf("Enter first number: "); 
 scanf("%f", &first_num); //enter first number  
 printf("Enter second number: ");
 scanf("%f", &second_num); //enter second number  
 switch(c){ //Switch-Case statement to return differentiate result by condition  
   case '+': printf("%f", first_num + second_num);  break;
   case '-': printf("%f", first_num - second_num);  break;  
   case '*': printf("%f", first_num * second_num);  break;
   case '/':if(second_num>0) {  printf("%f", first_num / second_num); } 
     else printf("error");  break;  
   default: printf("The operation \"%c\" isn't exists.", c);  break;  } 
 return 0; } 
