#include<stdio.h>
int main()
{
    int a,i,c=0;
    scanf("%d",&a);
    
    for(i=1;i<=a;i++)
    if(a%i==0)
   {
	 c=c+1;
	 printf("%d ",i);
}
}