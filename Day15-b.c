 #include<stdio.h>
 int main()
 {
 int i,j,u[10][10],r,s;

 scanf("%d",&r);

 scanf("%d",&s);

 for(i=0;i<r;i++)
 {
     for(j=0;j<s;j++)
     {
        
        scanf("%d",&u[i][j]);
    }
    
  }
  
 
     for(i=0;i<r;i++)
 {
     
     for(j=0;j<s;j++)
     {
        printf("%d ",u[i][j]);
    }
    
    printf("\n");
    
  }
  return 0;
}
