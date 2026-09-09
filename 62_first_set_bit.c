#include <stdio.h>

int main() {
    int n;
    int pos = 1;

    scanf("%d", &n);

    while (!(n & 1)) {
        n >>= 1;
        pos++;
    }

    printf("Position = %d", pos);

    return 0;
}
