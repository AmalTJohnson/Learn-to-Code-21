#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    float a,b,c;
    float p;
    
    
    scanf("%f%f%f", &a, &b, &c);
   
 
	   p=((a+b+c)/3);
    
    printf("%.2f",p);

    
    if(p>=90) 
    {
        printf("\nA");
    }
    else if(p>=80) 
    {
       printf("\nB") ;
    }
        
    else if(p>=70) 
    {
       printf("\nC") ;
    }
    
     else if(p>=60) 
    {
       printf("\nD") ;
    }
     else if(p>=40) 
    {
       printf("\nE") ;
    }
     else if(p<40) 
    {
       printf("\nF") ;
    }
           

    
    
   
    return 0;
}
