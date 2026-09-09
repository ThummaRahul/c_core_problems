#include <stdio.h>

int main()
{
    char bin[50];
    int i=0,dec=0;

    scanf("%s",bin);

    while(bin[i])
    {
        dec=dec*2+(bin[i]-'0');
        i++;
    }

    printf("%d",dec);

    return 0;
}
