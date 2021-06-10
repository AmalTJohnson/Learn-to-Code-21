// Question - Write a C Program to perform Read and Print operations using the four basic data types in C. (int, float, char & double)
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char a;
    float b;
    float c;
    float d;
    
    scanf("%c", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    
    printf("%c \n",a);
    printf("%.0f \n",b);
    printf("%f\n",c);
    printf("%f\n",d);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
