#include <stdio.h>

char buf[100];
int bufp = 0;

int getch(void) {
    if (bufp > 0) {
        return buf[--bufp];
    } else {
        return getchar();
    }
}

void ungetch(int c) {
    if (bufp < 100) {
        buf[bufp++] = c;
    }
}

int main() {
    int c;

    c = getch();

    printf("Character read: %c\n", c);

    ungetch(c);

    c = getch();

    printf("Character after ungetch: %c\n", c);

    return 0;
}
