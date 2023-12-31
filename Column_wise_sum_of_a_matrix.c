#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i = 0; i < a; i++)
    {
         for(int j = 0; j < b; j++)
         {
             scanf("%d",&arr[i][j]);
         }
    }
    for(int i = 0; i < b; i++)
    {
         int sum = 0;
         for(int j = 0; j < a; j++)
         {
             sum += arr[j][i];
         }
         printf("%d ",sum);
    }
}