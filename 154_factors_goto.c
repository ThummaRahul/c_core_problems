#include <stdio.h>

int main() {
    int n, i = 1;

    scanf("%d", &n);

start:
    if (i > n) {
        goto end;
    }

    if (n % i == 0) {
        printf("%d ", i);
    }

    i++;

    goto start;

end:
    return 0;
}
