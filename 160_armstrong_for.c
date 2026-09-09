#include <stdio.h>

int main() {
    int n, temp, d, sum = 0;

    scanf("%d", &n);

    temp = n;

    for (; temp > 0; temp /= 10) {
        d = temp % 10;
        sum += d * d * d;
    }

    if (sum == n) {
        printf("Armstrong");
    } else {
        printf("Not Armstrong");
    }

    return 0;
}
