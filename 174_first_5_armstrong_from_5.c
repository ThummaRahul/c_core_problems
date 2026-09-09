#include <stdio.h>

int main() {
    int n = 5;
    int count = 0;
    int temp, d, sum;

    while (count < 5) {
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

        n++;
    }

    return 0;
}
