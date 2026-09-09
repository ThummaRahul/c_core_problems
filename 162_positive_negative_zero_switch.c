#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    switch (n > 0 ? 1 : (n < 0 ? -1 : 0)) {
        case 1: {
            printf("Positive");
            break;
        }

        case -1: {
            printf("Negative");
            break;
        }

        case 0: {
            printf("Zero");
            break;
        }
    }

    return 0;
}
