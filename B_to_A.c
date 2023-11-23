#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    for(c=b;c>=a;c--)
    {
        printf("%d ",c);
    }
}