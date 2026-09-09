#include <stdio.h>

int main()
{
    char s[200];
    int i=0,j=0,max=0,start=0,end=0,pos=0;

    fgets(s,sizeof(s),stdin);

    while(1)
    {
        if(s[i]==' ' || s[i]=='\n' || s[i]=='\0')
        {
            if(j>max)
            {
                max=j;
                end=i;
                start=pos;
            }

            j=0;
            pos=i+1;

            if(s[i]=='\0' || s[i]=='\n')
                break;
        }
        else
            j++;

        i++;
    }

    for(i=start;i<end;i++)
        s[i]=' ';

    printf("%s",s);

    return 0;
}
