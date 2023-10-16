#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if (x==y&&y==z)
    printf("Equilateral triangle");
    else if(x==y||y==z||z==x)
    printf("Isosceles triangle");
    else
    printf("Scalene triangle");
}
