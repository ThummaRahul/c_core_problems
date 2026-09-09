#include <stdio.h>

int main() {
    int a = 0;
    int b = 1;
    int c;

    while (a <= 31) {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
