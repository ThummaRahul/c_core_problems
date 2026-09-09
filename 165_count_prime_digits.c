#include <stdio.h>

int main() {
    int n, d, c = 0;

    scanf("%d", &n);

    do {
        d = n % 10;

        if (d == 2 || d == 3 || d == 5 || d == 7) {
            c++;
        }

        n /= 10;
    } while (n > 0);

    printf("Count = %d", c);

    return 0;
}
