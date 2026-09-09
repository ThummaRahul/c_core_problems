#include <stdio.h>

int main() {
    char c;
    int len = 0, i;
    int hist[20] = {0};

    printf("Enter text:\n");

    while ((c = getchar()) != '\n') {
        if (c == ' ' || c == '\t') {
            if (len > 0) {
                hist[len]++;
                len = 0;
            }
        } else {
            len++;
        }
    }

    if (len > 0) {
        hist[len]++;
    }

    for (i = 1; i < 10; i++) {
        printf("%d: ", i);

        for (int j = 0; j < hist[i]; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
