// Q - Write a C program to check whether a given number is amstrong or not.
#include <math.h>
#include<stdio.h>  
 int main()    
{    
int n,r,sum=0,temp;    
    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(temp==sum)    
printf("Amstrong");    
else    
printf("Not Amstrong");    
return 0;  
 }
