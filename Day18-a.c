// Q - Write a C program to swap the values of two variables.
#include<stdio.h>
int main() {
      double f1, s2, temp;
     
      scanf("%lf", &f1);
      scanf("%lf", &s2);
    
      printf("a=%.0lf", f1);
      printf(" b=%.0lf", s2);

      
      temp = f1;
      f1 = s2;
      s2 = temp;


      printf("\na=%.0lf", f1);
      printf(" b=%.0lf", s2);
      return 0;
}
