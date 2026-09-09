#include <stdio.h>
#include <string.h>

void reverse(char s[]) {
    int i;
    int j;
    char temp;

    j = strlen(s) - 1;

    for (i = 0; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main() {
    char str[100];

    while (scanf("%99s", str) != EOF) {
        reverse(str);
        printf("%s\n", str);
    }

    return 0;
}
