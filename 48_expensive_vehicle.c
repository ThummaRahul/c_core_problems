#include <stdio.h>

typedef struct
{
    char model[30];
    int year;
    float price;
} Vehicle;

int main()
{
    int n,i,max=0;

    scanf("%d",&n);

    Vehicle v[n];

    for(i=0;i<n;i++)
    {
        scanf("%s",v[i].model);
        scanf("%d",&v[i].year);
        scanf("%f",&v[i].price);

        if(v[i].price>v[max].price)
            max=i;
    }

    printf("%s %d %.2f",
           v[max].model,
           v[max].year,
           v[max].price);

    return 0;
}
