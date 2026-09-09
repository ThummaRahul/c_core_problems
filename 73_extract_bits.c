#include <stdio.h>

int main() {
    int x;
    int p;
    int n;
    int result;

    scanf("%d %d %d", &x, &p, &n);

    result = (x >> p) & ((1 << n) - 1);

    printf("%d", result);

    return 0;
}
