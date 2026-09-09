#include <stdio.h>

char lower(char c) {
    return (c >= 'A' && c <= 'Z') ? c + 32 : c;
}

int main() {
    char c;

    scanf("%c", &c);

    printf("%c", lower(c));

    return 0;
}
