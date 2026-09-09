#include <stdio.h>

int main() {
    int n = 5;
    int count = 0;
    int i, flag;

    while (count < 5) {
        flag = 1;

        if (n < 2) {
            flag = 0;
        }

        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            printf("%d ", n);
            count++;
        }

        n++;
    }

    return 0;
}
