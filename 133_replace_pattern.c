#include <stdio.h>
#include <string.h>

void replace_all(char *str, char *pat, char *rep) {
    char buffer[1000] = "";
    char *curr = str;
    char *next;

    while ((next = strstr(curr, pat)) != NULL) {
        strncat(buffer, curr, next - curr);
        strcat(buffer, rep);
        curr = next + strlen(pat);
    }

    strcat(buffer, curr);

    printf("Result: %s\n", buffer);
}

int main() {
    char str[200];
    char pat[50];
    char rep[50];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter pattern to find: ");
    fgets(pat, sizeof(pat), stdin);
    pat[strcspn(pat, "\n")] = '\0';

    printf("Enter replacement: ");
    fgets(rep, sizeof(rep), stdin);
    rep[strcspn(rep, "\n")] = '\0';

    replace_all(str, pat, rep);

    return 0;
}
