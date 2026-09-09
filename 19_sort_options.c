#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[5][50];
    int i,j;
    char temp[50];

    for(i=0;i<5;i++)
        scanf("%s",s[i]);

    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(s[i],s[j])>0)
            {
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
            }
        }
    }

    printf("Sorted Strings:\n");

    for(i=0;i<5;i++)
        printf("%s\n",s[i]);

    return 0;
}
