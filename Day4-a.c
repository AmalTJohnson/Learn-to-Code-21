/* Q - Write a C Program to verify if a given year is a leap year or no */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int year ;
    scanf("%d", &year);
        
    
     if ((year%4==0)&&((year%400==0)||(year%100!=0)))
    
    { printf("Yes");
	}
     
     else
      {
		 printf("No");
		 
	  }
    
  
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0 ;
}
