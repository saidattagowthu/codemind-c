#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n],sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
  
       if(i%2!=0)
       {
       sum=sum+arr[i];
       }
    }
   
    printf("%d",sum);
    
}