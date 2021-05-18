/* Q - In a sequence of numbers from 1 - 100, replace the numbers divisble by 3 with "FIZZ", replace the numbers divisble by 5 with "BUZZ"
       and replace the numbers divisble by 15 with "FIZZBUZZ" and print the result */

#include <stdlib.h>
#include <stdio.h>
int  main()
{
	int i;
	
	 
	
	for(i=1;i<=100;i++)
	
		
		if ((i%5!=0)&&(i%3!=0)){
			printf("%d ", i);}
    
		else if (i%15==0){
		printf("FIZZBUZZ ");}
	
        else if((i%5==0)&&(i%15!=0))
		{printf("BUZZ ");}
	
		else if ((i%3==0)&&(i%15!=0))
		{printf("FIZZ ");}
		

		
	
	return 0;
}
	
