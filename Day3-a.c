/* Q - Write a C Program to determine the area of a square, circle and a triangle taking length, radius and base and height respectively from user input. */
#include<stdio.h>

int main()
{
   float side;
   float rad;
   float base,hite ;
    
    scanf("%f",&side);
    scanf("%f",&rad);
    scanf("%f",&base);
    scanf("%f",&hite);
    
    printf("%.0f\n", side*side );
    printf("%.1f\n", 3.14*rad*rad);
    printf("%.2f\n", .5*base*hite);
    
    return 0;
}
    
    
