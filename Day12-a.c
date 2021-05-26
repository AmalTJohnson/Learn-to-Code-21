#include <math.h>
#include <stdlib.h>
 
#include <stdio.h>

int main()
 {
  int values[10],N,i;
 
 
  scanf("%d",&N);

 for( i =0 ; i <N ; i++) 
  {
     scanf("%d", &values[i]);
  }
  

  
  for( i=N-1; i >=0 ; i--) {
     printf("%d ", values[i]);
  }
  
    
  return 0;
}
