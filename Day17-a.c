// Q -  Write a C program to print half pyramid of numbers
#include <string.h>
#include<stdio.h>

int main()
{
    int n=1,i,j,row;
    scanf("%d",&row);
    if (row<1)
    {
        printf("ERROR");
    }
    
    

   else{ for(i=1;i<=row;i++)
    {
        
            
        for(j=1;j<=i;j++)
        {
            
            printf("%d ",j);
            
        }
        n++;
        printf(" \n");
    } }
return 0;
}
