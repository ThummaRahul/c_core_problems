#include <stdio.h>
#include <string.h>

int main() {
    char line[200];
    char pattern[] = "the";
    int count = 0;

    while (fgets(line, sizeof(line), stdin) != NULL) {
        if (strstr(line, pattern) != NULL) {
            count++;
        }
    }

    printf("Lines containing pattern: %d", count);

    return 0;
}
