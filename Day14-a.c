#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char sent[100], b;
    int k=0,i=0;
    fgets(sent,sizeof(sent),stdin);
    scanf("%c",& b);
    
    for(i=0;sent[i]!='\0';i++)
    { 
       if (sent[i]==b)
           {
		   k++;
		   }    }
       
    printf("%d",k);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
