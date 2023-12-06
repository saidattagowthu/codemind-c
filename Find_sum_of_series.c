#include<stdio.h>
int main()
{
    float a,b,i,s=0;
    scanf("%f",&a);
    for(i=1;i<=a;i++)
    {
       b=1/(i);
       s=s+b;
       
    }
    printf("%.2f ",s);
}