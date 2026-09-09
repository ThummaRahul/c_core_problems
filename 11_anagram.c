#include <stdio.h>

int main()
{
    char s1[100],s2[100];
    int a[256]={0},i;

    scanf("%s%s",s1,s2);

    for(i=0;s1[i];i++)
        a[(unsigned char)s1[i]]++;

    for(i=0;s2[i];i++)
        a[(unsigned char)s2[i]]--;

    for(i=0;i<256;i++)
    {
        if(a[i]!=0)
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}
