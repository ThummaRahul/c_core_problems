#include <stdio.h>

void my_strcat(char *s,char *t)
{
    while(*s)
        s++;

    while((*s++=*t++));
}

int main()
{
    char s[100],t[100];

    scanf("%s%s",s,t);

    my_strcat(s,t);

    printf("%s",s);

    return 0;
}
