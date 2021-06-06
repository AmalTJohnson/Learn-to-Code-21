// Q - Write a C program to find the number of words in a string. Also reverse string.
#include <stdio.h>
#include <string.h>
     int strcount(char *s)

{
    
    int count = 0, i;
 
  
 
    for (i = 0;s[i] ;i++)
    {
        if (s[i] == 32)
            count++;    
    }
    if(i>0)
    count++;
    return count;
}
int main()
{
    char s[100],r[100];
    int word,numb,start,stop;
       scanf("%[^\n]s", s);
       word=strcount(s);
       while (s[numb] != '\0')
      numb++;

   stop = numb - 1;

   for (start = 0; start < numb; start++) {
      r[start] = s[stop];
      stop--;
   }

   r[start] = '\0';
       
       
    printf("no of words = %d\n", word);
    

   printf("%s", r);
}
