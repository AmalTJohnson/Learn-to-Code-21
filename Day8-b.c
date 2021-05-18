/* Q - Write a C Program to display a calculator with a menu consisting of each operation to perform on the numbers using Switch Case statement */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int v;
    float a,b;
    
    scanf("%d",&v);
    scanf("%f%f",&a,&b);
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    
    switch(v)
    {
        case 1: printf("%.0f",a+b);
            break;
            case 2: printf("%.0f\n",a-b);
            break;
            case 3: printf("%.0f\n",a*b);
            break;
            case 4: if (b==0)
                {printf("Cannot be determined");}
            else printf("%.1f\n",a/b);
                
            break;
      
    }

  
    return 0;
}
