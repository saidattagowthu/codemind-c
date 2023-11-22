#include<stdio.h>
int main()
{
    int x1,x2,y1;
    scanf("%d%d%d",&x1,&x2,&y1);
    if(x1>50 && x2>60 && y1>100)
printf("10");
else if (x1>50 && x2>60 && y1<100)
printf("9");
else if(x1<50 && x2>60 && y1>100)
printf("8");
else if(x1>50 && x2<60 && y1>100)
printf("7");
else if(x1>50 ||x2>60 || y1>100)
printf("6");
else 
printf("5");
    
}