#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isvowel(char ch)
{
    ch=tolower((unsigned char)ch);

    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}

int main()
{
    char s[100];
    int i=0,j;
    char t;

    fgets(s,sizeof(s),stdin);

    j=strlen(s)-1;

    if(j>=0 && s[j]=='\n')
        j--;

    while(i<j)
    {
        while(i<j && !isvowel(s[i]))
            i++;

        while(i<j && !isvowel(s[j]))
            j--;

        if(i<j)
        {
            t=s[i];
            s[i]=s[j];
            s[j]=t;
        }

        i++;
        j--;
    }

    printf("%s",s);

    return 0;
}
