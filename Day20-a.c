// Q - Write a C program to find the factorial of a given number using a recursive function.
#include <stdio.h>
 
 long int fun(int n)
{

if (n>=1)
    return n*fun(n-1);
     else 
         return 1;


}
int main()
{ 
int n;
scanf("%d",&n);
    if (n<0)
    { printf("ERROR"); }
    else
printf("%ld",fun(n));
return 0;
}
