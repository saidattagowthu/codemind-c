#include<stdio.h>
int main()
{
   int a,b,c;
   scanf("%d%d",&a,&b);
   if(a<b && (b-a)>=2)
   {
       for(c=a+1;c<b;c++)
       {
           printf("%d %d %d
",c,c*c,c*c*c);
       }
   }
}