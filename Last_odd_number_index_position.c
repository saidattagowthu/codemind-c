#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }   
    for(int i=a-1;i>=0;i--)
    {
        if(arr[i]%2==1)
        {
            printf("%d",i);
            break;
        }
    }
}