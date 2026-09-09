#include <stdio.h>

int main() {
    int n, d, p = 1;

    scanf("%d", &n);

    for (; n > 0; n /= 10) {
        d = n % 10;

        if (d % 2 != 0) {
            p *= d;
        }
    }

    printf("Product = %d", p);

    return 0;
}
