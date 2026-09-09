#include <stdio.h>

int main() {
    char str[100];
    int freq[10] = {0};
    int i;

    printf("Enter text: ");
    scanf("%s", str);

    printf("Digits found:\n");

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            printf("%c", str[i]);
            freq[str[i] - '0']++;
        }
    }

    printf("\nFrequency:\n");

    for (i = 0; i < 10; i++) {
        printf("%d -> %d\n", i, freq[i]);
    }

    return 0;
}
