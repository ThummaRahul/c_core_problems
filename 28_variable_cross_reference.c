#include <stdio.h>
#include <string.h>

int main()
{
    char vars[20][50];
    int n,i,N;

    scanf("%d%d",&n,&N);

    for(i=0;i<n;i++)
        scanf("%s",vars[i]);

    for(i=0;i<n;i++)
        printf("%.*s -> %s\n",N,vars[i],vars[i]);

    return 0;
}
