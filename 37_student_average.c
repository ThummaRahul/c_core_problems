#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float m1,m2,m3;
};

int main()
{
    int n,i;

    scanf("%d",&n);

    struct Student s[n];

    for(i=0;i<n;i++)
    {
        scanf("%s",s[i].name);
        scanf("%d",&s[i].roll);
        scanf("%f%f%f",
              &s[i].m1,
              &s[i].m2,
              &s[i].m3);
    }

    printf("\nStudent Averages\n");

    for(i=0;i<n;i++)
    {
        float avg=
        (s[i].m1+s[i].m2+s[i].m3)/3;

        printf("%s %d Avg=%.2f\n",
               s[i].name,
               s[i].roll,
               avg);
    }

    return 0;
}
