#include<stdio.h>
int main()
{
    int a,b,c=0,s;
    scanf("%d",&a);
    s=a*a;
    while(s!=0)
    {
        b=s%10;
        c=c+b;
        s=s/10;
        
    }
    if(c==a)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}