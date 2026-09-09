#include <stdio.h>

int main() {
    int n = 5;
    int alt = 0;
    int i, flag;

    while (n <= 35) {
        flag = 1;

        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            alt++;

            if (alt % 2 != 0) {
                printf("%d ", n);
            }
        }

        n++;
    }

    return 0;
}
