#include<stdio.h>
int main()
{
    int a=0,n;
    scanf("%d",&n);
    while(n!=0)
    {
        a++;
        n=n/10;
    }
    printf("%d",a);
}
    