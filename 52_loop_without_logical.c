#include <stdio.h>

int main() {
    int i = 0;
    int c;
    int lim = 100;

    for (i = 0; i < lim - 1; i++) {
        c = getchar();

        if (c == '\n') {
            break;
        }

        if (c == EOF) {
            break;
        }
    }

    return 0;
}
