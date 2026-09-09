#include <stdio.h>

int reverseNumber(int n, int rev) {
    if (n == 0) {
        return rev;
    }

    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main() {
    int num;
    int rev;

    scanf("%d", &num);

    rev = reverseNumber(num, 0);

    if (num == rev) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}
