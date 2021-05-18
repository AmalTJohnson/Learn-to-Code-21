#include <stdio.h>

int main()
{
    int num1, num2, num3, max;

 
    scanf("%d%d%d", &num1, &num2, &num3);
    if(num1 > num2)
    { if(num1 > num3)
        {
          max = num1;
          {
			  if (max<num2+num3)
         { printf("Yes");
          }
          else
         { printf("No"); }
	 }
	 
        
}
        else
        {
          max = num3;
         {
			  if (max<num2+num1)
          { printf("Yes"); }
          else 
          { printf("No"); }
        }
	}
    
}
    else 
    if(num2 > num3)
    {
         max = num2;
         {
			 if (max<num1+num3)
         { printf("Yes"); }
          else 
          printf("No");  
	  } 
  }      
        else
        {
         max = num3;
         {
			 if(max<num2+num1)
			 printf("Yes");
			 else
			 printf("No");
        }
    }
        
        
        
        

    return 0;
}
