#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[200],word[50];
    int i=0,j=0,k,start;

    fgets(s,sizeof(s),stdin);

    while(1)
    {
        if(s[i]==' ' || s[i]=='\n' || s[i]=='\0')
        {
            word[j]='\0';

            int flag=0;

            for(k=0;word[k];k++)
            {
                if(isdigit((unsigned char)word[k]) ||
                   strchr("aeiouAEIOU",word[k]) ||
                   ispunct((unsigned char)word[k]))
                {
                    flag=1;
                    break;
                }
            }

            if(flag)
            {
                for(k=0;k<j/2;k++)
                {
                    char t=word[k];
                    word[k]=word[j-1-k];
                    word[j-1-k]=t;
                }

                start=i-j;

                for(k=0;k<j;k++)
                    s[start+k]=word[k];
            }

            j=0;

            if(s[i]=='\0' || s[i]=='\n')
                break;
        }
        else
            word[j++]=s[i];

        i++;
    }

    printf("%s",s);

    return 0;
}
