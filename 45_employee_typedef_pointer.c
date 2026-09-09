#include <stdio.h>

typedef struct
{
    int id;
    char name[30];
    float salary;
} Employee;

typedef Employee* EmpPtr;

int main()
{
    Employee e[3];
    EmpPtr p;

    for(int i=0;i<3;i++)
    {
        p=&e[i];

        scanf("%d",&p->id);
        scanf("%s",p->name);
        scanf("%f",&p->salary);
    }

    printf("\nEmployee Details\n");

    for(int i=0;i<3;i++)
    {
        p=&e[i];

        printf("%d %s %.2f\n",
               p->id,
               p->name,
               p->salary);
    }

    return 0;
}
