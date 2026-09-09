#include <stdio.h>

int main() {
    int n;
    int mask;

    scanf("%d", &n);

    mask = (1 << n) - 1;

    printf("%d", mask);

    return 0;
}
