#include <stdio.h>

char *my_strstr(char *s,char *t)
{
    int i,j;

    for(i=0;s[i];i++)
    {
        for(j=0;t[j] && s[i+j]==t[j];j++);

        if(t[j]=='\0')
            return &s[i];
    }

    return NULL;
}

int main()
{
    char s[]="embedded systems";
    char t[]="sys";

    char *p=my_strstr(s,t);

    if(p)
        printf("%s",p);
    else
        printf("Not Found");

    return 0;
}
