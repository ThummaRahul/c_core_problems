#include <stdio.h>

int main() {
    int n, temp, rev, c = 0;

    for (n = 111; n <= 222; n++) {
        temp = n;
        rev = 0;

        while (temp > 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }

        if (rev == n) {
            c++;

            if (c % 2 != 0) {
                printf("%d ", n);
            }
        }
    }

    return 0;
}
