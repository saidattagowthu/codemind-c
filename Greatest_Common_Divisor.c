#include<stdio.h>
int main()
{
    int a,b,n,d,r,lcm,gcd;
    scanf("%d%d",&a,&b);
    n=(a>b)?a:b;
    d=(a<b)?a:b;
    r=n%d;
    while(r!=0)
    {
        n=d;
        d=r;
        r=n%d;
    }
    gcd=d;
   
    printf("%d",gcd);
}