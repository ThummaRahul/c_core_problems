#include <stdio.h>

union Value
{
    int i;
    float f;
};

int main()
{
    union Value a[5];
    char type[5];
    int n,i;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf(" %c",&type[i]);

        if(type[i]=='i')
            scanf("%d",&a[i].i);
        else
            scanf("%f",&a[i].f);
    }

    for(i=0;i<n;i++)
    {
        if(type[i]=='i')
            printf("%d\n",a[i].i);
        else
            printf("%.2f\n",a[i].f);
    }

    return 0;
}
