#include <stdio.h>

union Employee
{
    int id;
    float salary;
    int dept;
};

int main()
{
    union Employee e;

    e.id=101;
    printf("ID=%d\n",e.id);

    e.salary=35000.5;
    printf("Salary=%.2f\n",e.salary);

    e.dept=10;
    printf("Dept=%d\n",e.dept);

    return 0;
}
