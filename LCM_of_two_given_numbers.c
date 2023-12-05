#include<stdio.h>
int main()
{
    int a,b,i,c=0;
    scanf("%d%d",&b,&a);
    for(i=1;i<=b;i++)
    {
        if((a*i)%b==0)
        { printf("%d",a*i);
         break;
        }
    }
   }