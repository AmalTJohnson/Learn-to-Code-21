#include <math.h>
#include <stdlib.h>
 
#include <stdio.h>

int main()
 {
  int values[10],N,i,b=0,k=0;
  scanf("%d",&N);

 for( i =0 ; i <N ; i++) 
   {
     scanf("%d", &values[i]);
   }
   

  
  for(i=0; i<N ; i++)
  {
	  if(values[i]%2==0)
	  {
	  b=b+1;
	  }
	  
  }
  
  
	 for( i =0 ; i <N ; i++)
	 {
		  if(values[i]%2==1)
		  {
			  k=k+1;
		  }
		
	}
		
		printf("\n%d",b);
		printf("\n%d",k);
	  return 0;
	  
  }
  
  
  


