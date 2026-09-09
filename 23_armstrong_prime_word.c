#include <stdio.h>
#include <string.h>

int prime(int n)
{
    int i;

    if(n<2)
        return 0;

    for(i=2;i<=n/2;i++)
        if(n%i==0)
            return 0;

    return 1;
}

int armstrong(int n)
{
    int sum=0,t=n,d;

    if(n==0)
        return 1;

    while(t)
    {
        d=t%10;
        sum+=d*d*d;
        t/=10;
    }

    return sum==n;
}

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

            if(prime(j)||armstrong(j))
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
