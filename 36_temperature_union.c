#include <stdio.h>

union Temp
{
    float celsius;
    float fahrenheit;
};

int main()
{
    union Temp t;
    int choice;

    printf("1.Celsius->Fahrenheit\n");
    printf("2.Fahrenheit->Celsius\n");

    scanf("%d",&choice);

    if(choice==1)
    {
        scanf("%f",&t.celsius);

        printf("Fahrenheit = %.2f",
               (t.celsius*9/5)+32);
    }
    else
    {
        scanf("%f",&t.fahrenheit);

        printf("Celsius = %.2f",
               (t.fahrenheit-32)*5/9);
    }

    return 0;
}
