#include <stdio.h>

struct Customer
{
    int accno;
    char name[30];
    float loan;
    float rate;
};

int main()
{
    struct Customer c;

    scanf("%d",&c.accno);
    scanf("%s",c.name);
    scanf("%f",&c.loan);
    scanf("%f",&c.rate);

    float total=
    c.loan+(c.loan*c.rate/100);

    printf("Account : %d\n",c.accno);
    printf("Name    : %s\n",c.name);
    printf("Payable : %.2f\n",total);

    return 0;
}
