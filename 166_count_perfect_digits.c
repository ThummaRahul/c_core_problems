#include <stdio.h>

int main() {
    int n = 34686;
    int d;
    int c = 0;

    while (n > 0) {
        d = n % 10;

        if (d == 6) {
            c++;
        }

        n /= 10;
    }

    printf("Count = %d", c);

    return 0;
}
