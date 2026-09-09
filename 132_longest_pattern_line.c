#include <stdio.h>
#include <string.h>

int main() {
    char line[200];
    char longest[200] = "";
    char pat[] = "test";
    int max = 0;

    while (fgets(line, sizeof(line), stdin) != NULL) {
        if (strstr(line, pat) != NULL) {
            int len = strlen(line);

            if (len > max) {
                max = len;
                strcpy(longest, line);
            }
        }
    }

    if (max > 0) {
        printf("Longest line containing '%s':\n", pat);
        printf("%s", longest);
    } else {
        printf("No lines containing '%s' were found.", pat);
    }

    return 0;
}
