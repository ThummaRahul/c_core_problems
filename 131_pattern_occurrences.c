#include <stdio.h>
#include <string.h>

int countPattern(char line[], char pat[]) {
    int count = 0;
    int i;

    for (i = 0; line[i] != '\0'; i++) {
        if (strncmp(&line[i], pat, strlen(pat)) == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    char line[200];
    char pat[50];

    fgets(line, sizeof(line), stdin);
    line[strcspn(line, "\n")] = '\0';

    fgets(pat, sizeof(pat), stdin);
    pat[strcspn(pat, "\n")] = '\0';

    printf("Occurrence: %d", countPattern(line, pat));

    return 0;
}
