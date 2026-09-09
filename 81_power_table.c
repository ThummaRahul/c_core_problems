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
    int i;

    printf("i\t2^i\t(-3)^i\n");

    for (i = 0; i <= 9; i++) {
        printf("%d\t%d\t%d\n",
               i, power(2, i), power(-3, i));
    }

    return 0;
}
