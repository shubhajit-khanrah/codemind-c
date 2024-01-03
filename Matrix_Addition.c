#include<stdio.h>
int main()
{
    int n,m,sum;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int r,c;
    scanf("%d %d",&r,&c);
    int brr[r][c];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum=arr[i][j]+brr[i][j];
            printf("%d ",sum);
        }
        printf("
");
    }
    
}