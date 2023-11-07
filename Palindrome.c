#include<stdio.h>
int main()
{
	int a,b,c,d=0;
	scanf("%d",&a);
	c=a;
	while(a!=0)
	{
		b=a%10;
		d=d*10+b;
		a=a/10;
			}
		
		    if(c==d){
			printf("Palindrome");}
			else
			{
			printf("Not Palindrome");
		}
		
}
