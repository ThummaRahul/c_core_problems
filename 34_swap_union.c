#include <stdio.h>

union Data
{
    int i;
    float f;
};

int main()
{
    union Data a,b;
    int choice;

    scanf("%d",&choice);

    if(choice==1)
    {
        scanf("%d%d",&a.i,&b.i);

        a.i=a.i+b.i;
        b.i=a.i-b.i;
        a.i=a.i-b.i;

        printf("%d %d",a.i,b.i);
    }
    else
    {
        scanf("%f%f",&a.f,&b.f);

        a.f=a.f+b.f;
        b.f=a.f-b.f;
        a.f=a.f-b.f;

        printf("%.2f %.2f",a.f,b.f);
    }

    return 0;
}
