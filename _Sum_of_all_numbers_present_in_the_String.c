#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int sum=0;
    scanf("%[^
]s",str);
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            int digit=str[i]-'0';
            sum=sum+digit;
        }
    }
    printf("%d",sum);
}