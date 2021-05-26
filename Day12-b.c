#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int arr[10],i,j;
     for( i = 0; i < 10; i++) 
  {
    arr[0] = 10 ;
	arr[1] = 	25;
	arr[2] = 8;
	arr[3] = 	14;
	arr[4] = 	3;
	arr[5] = 	23;
	arr[6] = 	1;
	arr[7] = 	0;
	arr[8] = 	12;
	arr[9] = 	9;
}
   
   arr[2]=30;
    printf("%d\n",arr[3]);
    printf("%d\n",arr[9]);
   
    printf("%d\n",arr[2]);
    
    for (j=0;j<10;j++)
    {
		
    printf("%d ",arr[j]);
    }
    return 0;
}
