#include<stdio.h>
int main()
{
    int n,x,y;
    scanf("%d",&x);
   n=x%10;
    while(x>9)
     {
         x=x/10;
         
     }   
        
    
    printf("%d",n+x);
}