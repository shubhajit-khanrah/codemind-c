#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[1000];
    char a;
    scanf("%[^
]s",str);
    for(int i=0;str[i]!=NULL;i++)
    {
       a=tolower(str[i]);
       printf("%c",a);
    }
}