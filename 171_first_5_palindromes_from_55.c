#include <stdio.h>

int main() {
    int n = 55;
    int count = 0;
    int temp, rev;

    while (count < 5) {
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

        n++;
    }

    return 0;
}
