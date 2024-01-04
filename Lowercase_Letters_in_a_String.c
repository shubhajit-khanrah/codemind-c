#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int count=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        char ch=str[i];
        if(ch>='a' && ch<='z')
        {
            count++;
        }
    }
    printf("%d",count);
}