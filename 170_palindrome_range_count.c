#include <stdio.h>

int main() {
    int n, temp, rev, count = 0;

    for (n = 88; n <= 131; n++) {
        temp = n;
        rev = 0;

        while (temp > 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }

        if (rev == n) {
            printf("%d ", n);
            count++;
        }
    }

    printf("\nCount = %d", count);

    return 0;
}
