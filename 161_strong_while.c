#include <stdio.h>

int main() {
    int n, temp, d, sum = 0;

    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        int fact = 1;
        int i;

        d = temp % 10;

        for (i = 1; i <= d; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == n) {
        printf("Strong");
    } else {
        printf("Not Strong");
    }

    return 0;
}
