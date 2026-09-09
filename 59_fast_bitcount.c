#include <stdio.h>

int bitcount(unsigned x) {
    int count = 0;

    while (x) {
        x &= (x - 1);
        count++;
    }

    return count;
}

int main() {
    unsigned x;

    scanf("%u", &x);

    printf("%d", bitcount(x));

    return 0;
}
