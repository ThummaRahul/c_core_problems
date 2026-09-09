#include <stdio.h>
#include <string.h>

struct Macro
{
    char name[50];
    char value[50];
};

int main()
{
    struct Macro m[20];
    int n,i;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%s%s",m[i].name,m[i].value);

    char token[50];

    while(scanf("%s",token)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            if(strcmp(token,m[i].name)==0)
            {
                strcpy(token,m[i].value);
                break;
            }
        }

        printf("%s ",token);
    }

    return 0;
}
