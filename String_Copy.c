#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10000];
    scanf("%[^
]s",str1);
    char *str2=str1;
    printf("%s",str2);
}