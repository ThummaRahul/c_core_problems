#include <stdio.h>
#include <string.h>

int main() {
    char line[200];
    char pattern[] = "test";

    while (fgets(line, sizeof(line), stdin) != NULL) {
        if (strstr(line, pattern) != NULL) {
            printf("%s", line);
        }
    }

    return 0;
}
