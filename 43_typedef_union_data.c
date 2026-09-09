#include <stdio.h>

typedef union
{
    int i;
    float f;
    char c;
} data;

int main()
{
    data d;
    int type;

    scanf("%d",&type);

    if(type==1)
    {
        scanf("%d",&d.i);
        printf("%d",d.i);
    }
    else if(type==2)
    {
        scanf("%f",&d.f);
        printf("%.2f",d.f);
    }
    else
    {
        scanf(" %c",&d.c);
        printf("%c",d.c);
    }

    return 0;
}
