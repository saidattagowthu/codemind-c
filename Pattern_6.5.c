#include<stdio.h>
int main()
{
    int m,i,j;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i<=j)
            printf("%c ",i+64);
            else
            printf(" ");
        }printf("
");
    }
}