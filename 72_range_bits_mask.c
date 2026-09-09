#include <stdio.h>

int main() {
    int p;
    int q;
    int mask;

    scanf("%d %d", &p, &q);

    mask = ((1 << (q - p + 1)) - 1) << p;

    printf("%d", mask);

    return 0;
}
