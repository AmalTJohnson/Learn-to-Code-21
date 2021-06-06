// Write a C program to input two numbers.If sum of the numbers is even, find the 
// reverse of the sum .If sum is odd check whether the sum is prime or not.
#include<stdio.h>
int main()    
{    
int a,b,n, reverse=0, rem,i,fg=0;    
  
  scanf("%d", &a);    
  scanf("%d", &b);  
    n=a+b;
    if(n%2==0)
    {
  while(n!=0)    
  {    
     rem=n%10;    
     reverse=reverse*10+rem;    
     n/=10;    
  } 
    printf("%d",a+b);       
  printf("\n%d",reverse);   
    }
    
    else{
     for (i = 2; i <= n / 2; ++i) {
   
    if (n % i == 0) {
      fg = 1;
      break;
    }
  }

  
 
    if (fg == 0)
    { printf("%d\nPrime", n); }
    else
    {
        printf("%d\nNot prime", n);
  }}
return 0;  
}
