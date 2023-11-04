#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    for(int c=1;c<=b;c++)
    printf("%d x %d = %d
",a,c,a*c);
}