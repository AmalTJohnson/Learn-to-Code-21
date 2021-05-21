#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i=1;
    scanf("%d",&n);
    do
    {
        printf("%d.Table of%d\n",n,n);
        printf("%d",i*n);
        i++;
    }while(i<=10);
    
    return 0;
}
