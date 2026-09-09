#include <stdio.h>
#include <ctype.h>

int getop(char s[]) {
    int i = 0;
    int c;

    while ((c = getchar()) == ' ' || c == '\t') {
    }

    s[0] = c;
    s[1] = '\0';

    if (!isdigit(c) && c != '.') {
        return c;
    }

    if (isdigit(c)) {
        while (isdigit(s[++i] = getchar())) {
        }
    }

    if (s[i] == '.') {
        while (isdigit(s[++i] = getchar())) {
        }
    }

    s[i] = '\0';

    return '0';
}

int main() {
    char s[100];
    int type;

    type = getop(s);

    printf("Type: %c\n", type);
    printf("Operand: %s", s);

    return 0;
}
