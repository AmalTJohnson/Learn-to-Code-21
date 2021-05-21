#include<stdio.h>

int main()
{
	int n,i,j,row,b;
	scanf("%d",&row);
	n=row;
	

	for(i=1;i<=row;i++)
	{
		
		for(b=1;b<i;b++)
		{
			printf(" ");
			}
			
		for(j=1;j<=n;j++)
		{
			
			printf("%d",n);
			
		}
		n--;
		printf(" \n");
	} 
return 0;
}
