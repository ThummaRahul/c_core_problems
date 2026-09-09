#include <stdio.h>

int main() {
    unsigned int n;
    int count = 0;

    scanf("%u", &n);

    for (int i = 31; i >= 0; i--) {
        if ((n >> i) & 1) {
            break;
        }

        count++;
    }

    printf("%d", count);

    return 0;
}
