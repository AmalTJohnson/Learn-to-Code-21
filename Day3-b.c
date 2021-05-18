/* Q - Write a C Program to convert Fahrenheit to Celsius */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float F,F2;

    scanf("%f",&F);
    F2=(F-32)*5/9;
    printf("%.2f\n",F2);
    
        

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
