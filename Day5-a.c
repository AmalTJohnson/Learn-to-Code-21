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
	
