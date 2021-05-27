// Q - Write a C Program to display the product of two 2D arrays. Given values for both the 2D Arrays.
#include <stdio.h>
#include <string.h>

 int main()
 {
 int i,j,k,u1[10][10],r1,s1,u2[10][10],r2,s2 ;
 int sum=0,mult[10][10] ;
 
 scanf("%d",&r1);
 scanf("%d",&s1);

 for(i=0;i<r1;i++)
 {
     for(j=0;j<s1;j++)
     {
        
        scanf("%d",&u1[i][j]);
    }
    
  }
   
 scanf("%d",&r2);
 scanf("%d",&s2);
 if(s1==r2){
   for(i=0;i<r2;i++)
 {
     for(j=0;j<s2;j++)
     {
        
        scanf("%d",&u2[i][j]);
    }
    
  }
  
  for (i = 0; i<r1; i++) {
      for (j = 0; j < s2; j++) {
        for (k = 0; k < r2; k++) {
          sum = sum + u1[i][k]*u2[k][j];
        }
 
        mult[i][j] = sum;
        sum = 0;
      }
    }
 
   
 
    for (i = 0; i < r1; i++) {
      for (j = 0; j < s2; j++)
        printf("%d\t", mult[i][j]);
 
      printf("\n");
    }
}
else
printf("ERROR");
  
 
  return 0;

}
