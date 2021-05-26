 // Q - Write a C program to change the case of alphabets.
 #include<stdio.h>
 int main()
 {
     char wd[100];
     int i = 0;

     
 
      gets(wd);

     while( wd[i] != '\0' ) 
     {
        
        if(wd[i] >= 97 && wd[i] <= 122)
    {
    wd[i] = wd[i] - 32;
    }
      else if (wd[i]>=65 && wd[i]<=90)
       {
		   wd[i]=wd[i]+32;
	   }
	   else if(wd[i]==32)
	   {
		   wd[i]=wd[i]+0;
	   }
   
        
        i++;
     }

   
  
     puts(wd);

     return 0;
 
}
