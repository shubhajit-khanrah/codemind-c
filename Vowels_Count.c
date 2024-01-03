#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int count=0;
    scanf("%[^
]s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        char ch=s[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            count++;
        }
    }
    printf("%d",count);
}