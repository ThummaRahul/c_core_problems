#include <stdio.h>
#include <string.h>

struct Macro
{
    char name[20];
    char value[20];
};

int main()
{
    struct Macro m[5]={
        {"MAX","100"},
        {"MIN","0"},
        {"PI","3.14"}
    };

    int n=3,i,pos=-1;
    char key[20];

    scanf("%s",key);

    for(i=0;i<n;i++)
    {
        if(strcmp(m[i].name,key)==0)
        {
            pos=i;
            break;
        }
    }

    if(pos!=-1)
    {
        for(i=pos;i<n-1;i++)
            m[i]=m[i+1];

        n--;
    }

    for(i=0;i<n;i++)
        printf("%s %s\n",m[i].name,m[i].value);

    return 0;
}
