#include <stdio.h>
#include <string.h>

struct Ref
{
    char word[30];
    int line[20];
    int count;
};

int main()
{
    struct Ref r[100];
    int n=0,line=1,i;
    char word[30];

    while(scanf("%s",word)!=EOF)
    {
        int found=0;

        for(i=0;i<n;i++)
        {
            if(strcmp(r[i].word,word)==0)
            {
                r[i].line[r[i].count++]=line;
                found=1;
                break;
            }
        }

        if(!found)
        {
            strcpy(r[n].word,word);
            r[n].line[0]=line;
            r[n].count=1;
            n++;
        }
    }

    for(i=0;i<n;i++)
    {
        int j;

        printf("%s :",r[i].word);

        for(j=0;j<r[i].count;j++)
            printf(" %d",r[i].line[j]);

        printf("\n");
    }

    return 0;
}
