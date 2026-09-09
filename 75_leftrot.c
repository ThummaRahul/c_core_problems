#include <stdio.h>

int main() {
    unsigned int x;
    int n;
    int bits;

    scanf("%u %d", &x, &n);

    bits = 8 * sizeof(x);

    x = (x << n) | (x >> (bits - n));

    printf("%u", x);

    return 0;
}
