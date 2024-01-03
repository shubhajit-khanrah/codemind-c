#include<stdio.h>
int main()
{
    int n,m,x;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    int found=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(x==arr[i][j])
            {
                found=arr[i][j];
                break;
            }
        }
        if(found!=0)
        {
            break;
        }
    }
    if(found!=0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}