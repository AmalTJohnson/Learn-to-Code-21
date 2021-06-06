//Write a C program to find the minimum and maximum element of an array.


#include<stdio.h>
 int main()
 {
     int a[100],i,temp,n,k,b,j;
    
     scanf("%d",&n);
     for (i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     
 for (b =0;b<n-1;b++)
 {
    for (k=0;k<n-1;k++)
    if(a[k]>a[k+1])
     {
         temp=a[k];
         a[k]=a[k+1];
         a[k+1]=temp;
         
     }
 }
          for(j=0;j<n;j++)
          {
             printf("%d ",a[j]);
         }   
    
     
     return 0;
     }
