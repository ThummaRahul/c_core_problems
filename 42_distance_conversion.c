#include <stdio.h>

struct Distance
{
    float meter;
};

int main()
{
    struct Distance d;

    scanf("%f",&d.meter);

    printf("Kilometers  = %.3f km\n",
           d.meter/1000);

    printf("Centimeters = %.2f cm\n",
           d.meter*100);

    printf("Millimeters = %.2f mm\n",
           d.meter*1000);

    return 0;
}
