#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if (x<=10000)
    {
        

printf("%.2f",x+(0.80*x)+(0.20*x));
        
    }
else if(x<=20000)
{
printf("%.2f",x+(0.90*x)+(0.25*x));
}
else
{
printf("%.2f",x+(0.95*x)+(0.30*x));
}

    
}
