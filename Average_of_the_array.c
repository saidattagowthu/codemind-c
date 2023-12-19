#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n];
    float sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=(sum+arr[i]);
    }
    float avg=sum/n;
    printf("%.2f",avg);
}