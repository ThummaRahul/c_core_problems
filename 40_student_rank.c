#include <stdio.h>

struct Student
{
    char name[30];
    int roll;
    float total;
};

int main()
{
    int n,i,j;

    scanf("%d",&n);

    struct Student s[n],temp;

    for(i=0;i<n;i++)
    {
        scanf("%s",s[i].name);
        scanf("%d",&s[i].roll);
        scanf("%f",&s[i].total);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i].total<s[j].total)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }

    printf("\nRank List\n");

    for(i=0;i<n;i++)
    {
        printf("%d. %s %d %.2f\n",
               i+1,
               s[i].name,
               s[i].roll,
               s[i].total);
    }

    return 0;
}
