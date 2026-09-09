#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y) {
    return (x & ~(~(~0 << n) << (p + 1 - n))) |
           ((y & ~(~0 << n)) << (p + 1 - n));
}

int main() {
    unsigned x;
    unsigned y;
    int p;
    int n;

    scanf("%u %d %d %u", &x, &p, &n, &y);

    printf("%u", setbits(x, p, n, y));

    return 0;
}
