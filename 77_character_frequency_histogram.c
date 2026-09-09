#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter text: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: ", i);

            for (int j = 0; j < freq[i]; j++) {
                printf("*");
            }

            printf("\n");
        }
    }

    return 0;
}
