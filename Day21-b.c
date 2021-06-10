//  Q - Write a C program to find the number of prime numbers in a array of integers

#include<stdio.h>
#include<math.h>
int main() {
    int i,n,flag,c ,r, l[100];
    
    

    scanf("%d",&r);
    
    c = 0; 
    for(n = 0;n<r;++n){
        scanf("%d",&l[r]);
        
        
        
        
        
        if(l[r]==1)
            continue;
        
        
        flag = 0;
        for(i = 2;i<=sqrt(l[r]);++i){
            
            if(l[r]%i==0){
                flag=1;
                break;
            }
        
        
    
        
            
    }
    if(flag==0)
            ++c;
    }
    
    printf("%d\n",c);
    return 0;
    
    
}
