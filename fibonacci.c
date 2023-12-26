#include<stdio.h>
int main()
{
    int x,i,f1=0,f2=1,t;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        printf("%d ",f1);
        t=f1+f2;
        f1=f2;
        f2=t;
    }
    
}
