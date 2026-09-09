#include <stdio.h>
#include <stdlib.h>

int main() {
    char line[100];
    double sum = 0;

    while (fgets(line, sizeof(line), stdin) != NULL) {
        sum += atof(line);

        printf("Running sum: %.2f\n", sum);
    }

    return 0;
}
