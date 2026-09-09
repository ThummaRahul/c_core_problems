#include <stdio.h>
#include <string.h>

struct Word
{
    char word[50];
    int count;
};

int main()
{
    struct Word w[100];
    int n=0,i,j,found;
    char str[500];

    fgets(str,sizeof(str),stdin);

    char *p=strtok(str," \n");

    while(p)
    {
        found=0;

        for(i=0;i<n;i++)
        {
            if(strcmp(w[i].word,p)==0)
            {
                w[i].count++;
                found=1;
                break;
            }
        }

        if(!found)
        {
            strcpy(w[n].word,p);
            w[n].count=1;
            n++;
        }

        p=strtok(NULL," \n");
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(w[i].count<w[j].count)
            {
                struct Word t=w[i];
                w[i]=w[j];
                w[j]=t;
            }
        }
    }

    for(i=0;i<n;i++)
        printf("%d %s\n",w[i].count,w[i].word);

    return 0;
}
