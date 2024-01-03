#include<stdio.h>
int main()
{
  int n,m,es=0,os=0;
  scanf("%d %d",&n,&m);
  int arr[n][m];
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          scanf("%d",&arr[i][j]);
      }
  }
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          if(arr[i][j]%2==0)
          {
              es+=arr[i][j];
          }
          else
          {
              os+=arr[i][j];
          }
      }
  }
  printf("%d %d",es,os);
}