#include <stdio.h>

float my_atof(char s[])
{
    int i=0;
    float val=0.0,power=1.0;

    while(s[i] && s[i]!='.')
    {
        val=val*10+(s[i]-'0');
        i++;
    }

    if(s[i]=='.')
        i++;

    while(s[i])
    {
        val=val*10+(s[i]-'0');
        power*=10;
        i++;
    }

    return val/power;
}

int main()
{
    char s[50];

    scanf("%s",s);

    printf("%f",my_atof(s));

    return 0;
}
