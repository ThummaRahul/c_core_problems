#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[500];
    int a[26]={0},i;

    fgets(s,sizeof(s),stdin);

    for(i=0;s[i];i++)
    {
        if(isalpha((unsigned char)s[i]))
            a[tolower((unsigned char)s[i])-'a']=1;
    }

    for(i=0;i<26;i++)
    {
        if(a[i]==0)
        {
            printf("Not Pangram");
            return 0;
        }
    }

    printf("Pangram");

    return 0;
}
