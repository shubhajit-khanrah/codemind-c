#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000];
    scanf("%[^
]s",str);
    int count=1;
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    printf("%d",count);
}