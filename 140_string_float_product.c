#include <stdio.h>
#include <stdlib.h>

int main() {
    char a[50];
    char b[50];
    double x;
    double y;

    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    x = atof(a);
    y = atof(b);

    printf("Product: %.2f", x * y);

    return 0;
}
