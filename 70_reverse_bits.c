#include <stdio.h>

int main() {
    unsigned int n;
    unsigned int rev = 0;

    scanf("%u", &n);

    for (int i = 0; i < 32; i++) {
        rev = (rev << 1) | (n & 1);
        n >>= 1;
    }

    printf("%u", rev);

    return 0;
}
