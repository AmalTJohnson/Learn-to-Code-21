// Q - Write a C Program to read a 2D array. Then, search for a particular given element. 
// If found, display each occurrence of that element with its position(s).
 #include<stdio.h>
 int main()
 {
 int i,j,u[10][10],r,s,el,k=0;

 scanf("%d",&r);
 
 scanf("%d",&s);

 for(i=0;i<r;i++)
 {
     for(j=0;j<s;j++)
     {
        
        scanf("%d",&u[i][j]);
    }
    
  }
  
 
   

  scanf("%d",&el);
  for(i=0;i<r;i++)
  for(j=0;j<s;j++)
       {
          if(u[i][j]==el)
        {
          printf("Element found at (%d,%d)\n",i,j);
            k++; 
               
        }
     
     
       }
      if(k==0){
            printf("Element not found ");
             }
     return 0;
       }
