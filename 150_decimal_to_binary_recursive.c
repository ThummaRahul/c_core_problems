#include <stdio.h>

void binary(int n) {
    if (n > 1) {
        binary(n / 2);
    }

    printf("%d", n % 2);
}

int main() {
    int n;

    scanf("%d", &n);

    if (n == 0) {
        printf("0");
    } else {
        binary(n);
    }

    return 0;
}
