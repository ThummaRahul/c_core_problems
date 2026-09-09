#include <stdio.h>

int main() {
    int n, temp, d, sum, count = 0;

    for (n = 6; n <= 666; n++) {
        temp = n;
        sum = 0;

        while (temp > 0) {
            d = temp % 10;
            sum += d * d * d;
            temp /= 10;
        }

        if (sum == n) {
            printf("%d ", n);
            count++;
        }
    }

    printf("\nCount = %d", count);

    return 0;
}
