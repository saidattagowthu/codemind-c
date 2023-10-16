#include<stdio.h>
int main()
{
    int unit;
    float uc,b,tb;
    scanf("%d",&unit);
    if (unit<200)
    {
     uc=1.20;
    }
    else if (unit>=200  && unit<400)
    {
        uc=1.50;
    }
    else if (unit>=400&&unit<600)
    {
        uc=1.80;
}
else 
{
    uc=2.00;
    
    }
    b=unit*uc;
    if (b>400)
    {
        tb=b+(b*0.15);
        printf("%.2f",tb);
        
    }
    else 
    { 
    tb=b+100;
    printf("%.2f",tb);
    }
}