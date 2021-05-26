#include <math.h>
#include <stdlib.h>
 
#include <stdio.h>

int main()
 {
  int values[10],N,i,b,result;
  scanf("%d",&N);

 for( i =0 ; i <N ; i++) 
   {
     scanf("%d", &values[i]);
   }
   
  scanf("%d",&b);
  result=0;
  for(i=0; i<N ; i++)
  {
	  if(values[i] == b){
	  result=1;
	  break;
  }
  }
  if (result == 1)
  {
	  printf("\n%d is present in this array ",b);
  }
  else
  {
	   printf("\n%d is not present in this array ",b);
	  
  }
  
  
  
  
    
  return 0;
}
