#include <stdio.h>

float convert(float c) {
    return (9.0 / 5.0) * c + 32;
}

int main() {
    float c;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    printf("%.2f Celsius = %.2f Fahrenheit\n",
           c, convert(c));

    return 0;
}
