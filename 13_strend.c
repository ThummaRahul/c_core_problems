#include <stdio.h>
#include <string.h>

int strend(char *s,char *t)
{
    int ls=strlen(s);
    int lt=strlen(t);

    if(lt>ls)
        return 0;

    return strcmp(s+ls-lt,t)==0;
}

int main()
{
    char s[100],t[100];

    scanf("%s%s",s,t);

    printf("%d",strend(s,t));

    return 0;
}
