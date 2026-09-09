#include <stdio.h>

struct Address
{
    char city[30];
    char state[30];
    int pin;
};

struct Student
{
    char name[30];
    int roll;
    struct Address addr;
};

int main()
{
    struct Student s;

    scanf("%s",s.name);
    scanf("%d",&s.roll);

    scanf("%s",s.addr.city);
    scanf("%s",s.addr.state);
    scanf("%d",&s.addr.pin);

    printf("\nName : %s",s.name);
    printf("\nRoll : %d",s.roll);
    printf("\nCity : %s",s.addr.city);
    printf("\nState: %s",s.addr.state);
    printf("\nPIN  : %d",s.addr.pin);

    return 0;
}
