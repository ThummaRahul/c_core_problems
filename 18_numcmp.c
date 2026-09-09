#include <stdio.h>
#include <stdlib.h>

int numcmp(char *s1,char *s2)
{
    int n1=atoi(s1);
    int n2=atoi(s2);

    if(n1>n2)
        return 1;
    else if(n1<n2)
        return -1;
    else
        return 0;
}

int main()
{
    char s1[]="12345";
    char s2[]="4567";

    printf("%d",numcmp(s1,s2));

    return 0;
}
