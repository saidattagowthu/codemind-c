#include<stdio.h>
int main()
{
    int n,b,s=0,p=1,i;
    scanf("%d",&n);
    while(n!=0)
    {
        b=n%10;
        s=s+b;
        p=p*b;
        n=n/10;
        
    }
    if(s==p)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}