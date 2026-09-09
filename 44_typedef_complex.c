#include <stdio.h>

typedef struct
{
    float real;
    float imag;
} complex;

int main()
{
    complex c1,c2,sum;

    scanf("%f%f",&c1.real,&c1.imag);
    scanf("%f%f",&c2.real,&c2.imag);

    sum.real=c1.real+c2.real;
    sum.imag=c1.imag+c2.imag;

    printf("%.2f + %.2fi",sum.real,sum.imag);

    return 0;
}
