#include <stdio.h>

int strindex(char s[],char t[])
{
    int i,j,k,pos=-1;

    for(i=0;s[i];i++)
    {
        for(j=i,k=0;t[k] && s[j]==t[k];j++,k++);

        if(t[k]=='\0')
            pos=i;
    }

    return pos;
}

int main()
{
    char s[100],t[50];

    scanf("%s",s);
    scanf("%s",t);

    printf("%d",strindex(s,t));

    return 0;
}
