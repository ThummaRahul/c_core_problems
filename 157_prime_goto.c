#include <stdio.h>

int main() {
    int n, i = 2;

    scanf("%d", &n);

    if (n < 2) {
        printf("Not Prime");
        return 0;
    }

start:
    if (i <= n / 2) {
        if (n % i == 0) {
            printf("Not Prime");
            return 0;
        }

        i++;

        goto start;
    }

    printf("Prime");

    return 0;
}
