#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];
    char words[20][50];
    int count=0,i=0,j=0;

    fgets(s,sizeof(s),stdin);

    while(1)
    {
        if(s[i]==' ' || s[i]=='\n' || s[i]=='\0')
        {
            words[count][j]='\0';

            if(j>0)
                count++;

            j=0;

            if(s[i]=='\0' || s[i]=='\n')
                break;
        }
        else
            words[count][j++]=s[i];

        i++;
    }

    if(count==0)
        return 0;

    int max=0,min=0;

    for(i=1;i<count;i++)
    {
        if(strlen(words[i])>strlen(words[max]))
            max=i;

        if(strlen(words[i])<strlen(words[min]))
            min=i;
    }

    char temp[50];

    strcpy(temp,words[max]);
    strcpy(words[max],words[min]);
    strcpy(words[min],temp);

    for(i=0;i<count;i++)
        printf("%s ",words[i]);

    return 0;
}
