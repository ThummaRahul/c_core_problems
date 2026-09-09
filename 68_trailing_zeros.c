#include <stdio.h>

int main() {
    int n;
    int count = 0;

    scanf("%d", &n);

    while ((n & 1) == 0) {
        count++;
        n >>= 1;
    }

    printf("%d", count);

    return 0;
}
