/* Q - Write a C Program to perform all four basic Mathematical Operations on two numbers taken from user input. */
#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double num1;
   double num2 ;
   
   scanf("%lf", &num1);
    
    scanf("%lf", &num2);
       
       printf("%.0f\n",num1+num2);
       printf("%.0f\n",num1-num2);
       printf("%.0f\n",num1*num2);
       printf("%.2f\n",num1/num2);
       
       
       
       return 0;
   } 
