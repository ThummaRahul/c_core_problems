#include <stdio.h>

void reverse(char s[])
{
    int i=0,j=0;
    char t;

    while(s[j]) j++;
    j--;

    while(i<j)
    {
        t=s[i];
        s[i]=s[j];
        s[j]=t;
        i++;
        j--;
    }
}

void itob(int n,char s[],int b)
{
    int i=0,r;

    do
    {
        r=n%b;

        if(r<10)
            s[i++]=r+'0';
        else
            s[i++]=r-10+'A';

        n/=b;

    }while(n>0);

    s[i]='\0';

    reverse(s);
}

int main()
{
    int n,b;
    char s[50];

    scanf("%d%d",&n,&b);

    itob(n,s,b);

    printf("%s",s);

    return 0;
}
