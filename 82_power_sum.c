#include <stdio.h>

int power(int m, int n) {
    int i;
    int p = 1;

    for (i = 1; i <= n; i++) {
        p *= m;
    }

    return p;
}

int main() {
    int a = power(2, 5);
    int b = power(3, 3);

    printf("2^5 = %d\n", a);
    printf("3^3 = %d\n", b);
    printf("Sum = %d\n", a + b);

    return 0;
}
