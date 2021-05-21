
#include<stdio.h>  
int main()    
{    
int n,r,m=0,tp;    
   
scanf("%d",&n);    
tp=n;    
while(tp!=0)    
{    
r=tp%10;    
m=(m*10)+r;    
tp=tp/10;    
}    
if(n==m)    
printf("Yes"); 
else    
printf("No"); 
return 0;  
}
