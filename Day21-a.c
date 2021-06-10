//  Q - Write a C program to count and display the number of Vowels, Consonants and spaces in a string
// Q - Write a C program to count and display the number of Vowels, Consonants and spaces in a string
 #include<stdio.h>
 int main()
 {
     char wd[200];
     int i ,v=0,c=0,s=0;

 
      gets(wd);
      for(i=0; wd[i] != '\0'; i++)

     {
     
        
        if(wd[i] == 97 || wd[i] == 101 || wd[i] == 105 ||  wd[i] == 111 || wd[i] == 117)
     
       v=v+1;
    


    
      else if ((wd[i]>=98 && wd[i]<=122) && (wd[i] != 97 || wd[i] != 101 || wd[i] != 105 ||  wd[i] != 111 || wd[i] != 117))
       
           c=c+1;
            
          
       
       else if (wd[i]==32)
       
            s=s+1 ;
          else 
              printf("ERROR");
             
        
     
   
        
        
     }
printf("%d\n",v);
printf("%d\n",c);
  printf("%d\n",s);
   
  
    

     return 0;
 
}
