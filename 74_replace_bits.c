#include <stdio.h>

int main() {
    int x;
    int y;
    int p;
    int n;

    scanf("%d %d %d %d", &x, &y, &p, &n);

    x = (x & ~(((1 << n) - 1) << p)) |
        ((y & ((1 << n) - 1)) << p);

    printf("%d", x);

    return 0;
}
