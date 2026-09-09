#include <stdio.h>
#include <string.h>

int main() {
    char line[200];
    char pattern[] = "world";

    while (fgets(line, sizeof(line), stdin) != NULL) {
        char *pos = strstr(line, pattern);

        if (pos != NULL) {
            printf("Pattern found at index %ld\n", pos - line);
        }
    }

    return 0;
}
