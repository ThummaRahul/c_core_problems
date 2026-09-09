#include <stdio.h>

int main() {
    int choice, n, i, flag, sum, temp, d, rev;
    int fact, digitSum;

    printf("1. Prime\n");
    printf("2. Perfect\n");
    printf("3. Strong\n");
    printf("4. Armstrong\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter number: ");
    scanf("%d", &n);

    switch (choice) {
        case 1: {
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
                printf("Prime");
            } else {
                printf("Not Prime");
            }

            break;
        }

        case 2: {
            sum = 0;

            for (i = 1; i < n; i++) {
                if (n % i == 0) {
                    sum += i;
                }
            }

            if (sum == n) {
                printf("Perfect");
            } else {
                printf("Not Perfect");
            }

            break;
        }

        case 3: {
            temp = n;
            sum = 0;

            while (temp > 0) {
                d = temp % 10;
                fact = 1;

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

            break;
        }

        case 4: {
            temp = n;
            digitSum = 0;

            while (temp > 0) {
                d = temp % 10;
                digitSum += d * d * d;
                temp /= 10;
            }

            if (digitSum == n) {
                printf("Armstrong");
            } else {
                printf("Not Armstrong");
            }

            break;
        }

        default: {
            printf("Invalid choice");
            break;
        }
    }

    return 0;
}
