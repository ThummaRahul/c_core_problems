#include <stdio.h>
#include <string.h>

void reverse(char s[])
{
    int i=0,j=strlen(s)-1;
    char t;

    while(i<j)
    {
        t=s[i];
        s[i]=s[j];
        s[j]=t;
        i++;
        j--;
    }
}

void my_itoa(int n,char s[],int width)
{
    int i=0;

    do
    {
        s[i++]=n%10+'0';
        n/=10;

    }while(n>0);

    while(i<width)
        s[i++]=' ';

    s[i]='\0';

    reverse(s);
}

int main()
{
    int n,width;
    char s[50];

    scanf("%d%d",&n,&width);

    my_itoa(n,s,width);

    printf("%s",s);

    return 0;
}
