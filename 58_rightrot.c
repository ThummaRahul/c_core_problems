#include <stdio.h>

unsigned rightrot(unsigned x, int n) {
    int bits = 8 * sizeof(x);

    return (x >> n) | (x << (bits - n));
}

int main() {
    unsigned x;
    int n;

    scanf("%u %d", &x, &n);

    printf("%u", rightrot(x, n));

    return 0;
}
