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

void my_itoa(int n,char s[])
{
    int i=0,sign=n;

    if(n<0)
        n=-n;

    do
    {
        s[i++]=n%10+'0';
        n/=10;
    }while(n>0);

    if(sign<0)
        s[i++]='-';

    s[i]='\0';

    reverse(s);
}

int main()
{
    int n;
    char s[50];

    scanf("%d",&n);

    my_itoa(n,s);

    printf("%s",s);

    return 0;
}
