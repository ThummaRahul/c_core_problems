#include <stdio.h>

void my_strncpy(char d[],char s[],int n)
{
    int i;

    for(i=0;i<n && s[i];i++)
        d[i]=s[i];

    d[i]='\0';
}

void my_strncat(char d[],char s[],int n)
{
    int i=0,j=0;

    while(d[i])
        i++;

    while(j<n && s[j])
        d[i++]=s[j++];

    d[i]='\0';
}

int my_strncmp(char s1[],char s2[],int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        if(s1[i]!=s2[i])
            return s1[i]-s2[i];

        if(s1[i]=='\0')
            return 0;
    }

    return 0;
}

int main()
{
    char s1[100]="Hello";
    char s2[100]="World";
    char d[100];

    my_strncpy(d,s1,3);
    printf("strncpy=%s\n",d);

    my_strncat(s1,s2,3);
    printf("strncat=%s\n",s1);

    printf("strncmp=%d",my_strncmp("abc","abd",3));

    return 0;
}
