#include <stdio.h>

union Data
{
    int i;
    float f;
    char str[20];
};

struct Record
{
    int id;
    char type;
    union Data d;
};

int main()
{
    int n,i;

    scanf("%d",&n);

    struct Record r[n];

    for(i=0;i<n;i++)
    {
        scanf("%d %c",&r[i].id,&r[i].type);

        if(r[i].type=='i')
            scanf("%d",&r[i].d.i);

        else if(r[i].type=='f')
            scanf("%f",&r[i].d.f);

        else
            scanf("%s",r[i].d.str);
    }

    printf("\nRecords:\n");

    for(i=0;i<n;i++)
    {
        printf("ID:%d ",r[i].id);

        if(r[i].type=='i')
            printf("INT:%d\n",r[i].d.i);

        else if(r[i].type=='f')
            printf("FLOAT:%.2f\n",r[i].d.f);

        else
            printf("STR:%s\n",r[i].d.str);
    }

    return 0;
}
