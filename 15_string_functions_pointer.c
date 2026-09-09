#include <stdio.h>

void p_strncpy(char *d,char *s,int n)
{
    while(n-- && *s)
        *d++=*s++;

    *d='\0';
}

void p_strncat(char *d,char *s,int n)
{
    while(*d)
        d++;

    while(n-- && *s)
        *d++=*s++;

    *d='\0';
}

int p_strncmp(char *s1,char *s2,int n)
{
    while(n-- && *s1 && *s2)
    {
        if(*s1!=*s2)
            return *s1-*s2;

        s1++;
        s2++;
    }

    return 0;
}

int main()
{
    char a[100]="Hello";
    char b[100]="World";
    char d[100];

    p_strncpy(d,a,4);
    printf("%s\n",d);

    p_strncat(a,b,2);
    printf("%s\n",a);

    printf("%d",p_strncmp("abc","abd",3));

    return 0;
}
