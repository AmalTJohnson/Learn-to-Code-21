/* Q - Write a C Program to find the maximum and minimum from three user inputted numbers */
#include <stdio.h>

int main()
{
    int num1, num2, num3, max, min;

 
    scanf("%d%d%d", &num1, &num2, &num3);
    if(num1 > num2)
    { if(num1 > num3)
        {
          max = num1;
        }
        else
        {
          max = num3;
        }
    }
    else
    {
      if(num2 > num3)
    {
         max = num2;
        }
        else
        {
         max = num3;
        }
    }
        printf("%d\n", max);
        
        
         if(num1 < num2)
    { if(num1 < num3)
        {
          min = num1;
        }
        else
        {
          min = num3;
        }
    }
    else
    {
      if(num2 < num3)
    {
         min = num2;
    }
        else
        {
         min = num3;
        }
    }
    printf("%d\n", min);
        

    return 0;
}
