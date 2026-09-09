#include <stdio.h>
#include <string.h>

int strindex(char s[], char t[]) {
    int i, j, k;
    int pos = -1;

    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++) {
        }

        if (k > 0 && t[k] == '\0') {
            pos = i;
        }
    }

    return pos;
}

int main() {
    char s[100];
    char t[50];

    printf("Enter main string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    printf("Enter substring: ");
    fgets(t, sizeof(t), stdin);
    t[strcspn(t, "\n")] = '\0';

    printf("Index: %d", strindex(s, t));

    return 0;
}
