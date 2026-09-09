#include <stdio.h>

int main() {
    int n;
    long long fact = 1;

    scanf("%d", &n);

    while (n > 0) {
        fact *= n;
        n--;
    }

    printf("Factorial = %lld", fact);

    return 0;
}
