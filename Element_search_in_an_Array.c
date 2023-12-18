#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,flag=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    int sar;
    scanf("%d",&sar);
    for(i=0;i<n;i++)
    {
        if(a[i]==sar)
        {
        flag=1;
        break;
        }
    }
    if(flag==1)
    printf("True");
    else
    printf("False");
}
