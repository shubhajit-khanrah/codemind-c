#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int length=strlen(str)-0;
    for(int i=length-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}