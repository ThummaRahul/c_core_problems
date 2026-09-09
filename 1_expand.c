#include <stdio.h>

void expand(char s1[], char s2[])
{
    int i,j=0;
    char c;

    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]=='-' && i>0 && s1[i+1]!='\0')
        {
            for(c=s1[i-1]+1;c<s1[i+1];c++)
                s2[j++]=c;
        }
        else
        {
            if(s1[i+1]!='-' || i==0)
                s2[j++]=s1[i];
        }
    }

    s2[j]='\0';
}

int main()
{
    char s1[100],s2[200];

    printf("Enter shorthand string: ");
    scanf("%s",s1);

    expand(s1,s2);

    printf("%s\n",s2);

    return 0;
}
