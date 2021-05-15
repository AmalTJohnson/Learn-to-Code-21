​#include <stdlib.h>
#include <stdio.h>
int  main()
{
	int i,n;
	long fact=1 ;
	scanf("%d", &n);
	
    if(n>=0){
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%ld",fact);
    }

    else if(n<0)
        {
		  printf("ERROR");
        }
	
	
	 
	return 0;
	}
