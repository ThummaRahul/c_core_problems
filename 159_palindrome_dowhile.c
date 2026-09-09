#include <stdio.h>

int main() {
    int n, temp, rev = 0, d;

    scanf("%d", &n);

    temp = n;

    do {
        d = temp % 10;
        rev = rev * 10 + d;
        temp /= 10;
    } while (temp > 0);

    if (rev == n) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}
