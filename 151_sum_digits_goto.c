#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

start:
    if (n == 0) {
        goto end;
    }

    sum += n % 10;
    n /= 10;

    goto start;

end:
    printf("Sum = %d", sum);

    return 0;
}
