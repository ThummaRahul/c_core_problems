#include <stdio.h>

double max(double a, double b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    double x, y;

    scanf("%lf %lf", &x, &y);

    printf("%.2f", max(x, y));

    return 0;
}
