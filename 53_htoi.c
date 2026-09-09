#include <stdio.h>

int htoi(char s[]) {
    int i = 0;
    int n = 0;

    if (s[0] == '0') {
        if (s[1] == 'x' || s[1] == 'X') {
            i = 2;
        }
    }

    for (; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            n = n * 16 + (s[i] - '0');
        } else if (s[i] >= 'A' && s[i] <= 'F') {
            n = n * 16 + (s[i] - 'A' + 10);
        } else if (s[i] >= 'a' && s[i] <= 'f') {
            n = n * 16 + (s[i] - 'a' + 10);
        }
    }

    return n;
}

int main() {
    char s[100];

    scanf("%s", s);

    printf("%d", htoi(s));

    return 0;
}
