#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    for (d=b;d<=c;d++)
    printf("%d x %d = %d
",a,d,a*d);
}