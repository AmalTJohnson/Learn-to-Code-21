#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, D , rt1, rt2, real, img;
    
    scanf("%lf %lf %lf", &a, &b, &c);

    D = b * b - 4 * a * c;

    
    if (D > 0) {
        rt1 = (-b + sqrt(D)) / (2 * a);
        rt2 = (-b - sqrt(D)) / (2 * a);
        printf(" %.2lf , %.2lf", rt1, rt2);
    }

   
    else if (D == 0) {
        rt1 = rt2 = -b / (2 * a);
        printf("%.2lf;", rt1);
    }

   
    else {
        real = -b / (2 * a);
        img = sqrt(-D) / (2 * a);
        printf("Complex: %.2lf+%.2fi , %.2lf-%.2fi", real, img, real, img);
    }

    return 0;
} 
