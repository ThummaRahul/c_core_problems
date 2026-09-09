#include <stdio.h>

int my_atoi(char s[])
{
    int i=0,num=0;

    while(s[i])
    {
        num=num*10+(s[i]-'0');
        i++;
    }

    return num;
}

int main()
{
    char s[50];

    scanf("%s",s);

    printf("%d",my_atoi(s));

    return 0;
}
