#include <stdio.h>

int main()
{
    char bin[50];
    int i=0,dec=0;
    char hex[50];
    int j=0,k;
    char t;

    scanf("%s",bin);

    while(bin[i])
    {
        dec=dec*2+(bin[i]-'0');
        i++;
    }

    do
    {
        int r=dec%16;

        if(r<10)
            hex[j++]=r+'0';
        else
            hex[j++]=r-10+'A';

        dec/=16;

    }while(dec>0);

    hex[j]='\0';

    for(k=0;k<j/2;k++)
    {
        t=hex[k];
        hex[k]=hex[j-1-k];
        hex[j-1-k]=t;
    }

    printf("%s",hex);

    return 0;
}
