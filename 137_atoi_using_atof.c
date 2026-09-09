#include <stdio.h>
#include <stdlib.h>

int atoi2(char s[]) {
    return (int)atof(s);
}

int main() {
    char num[50];

    fgets(num, sizeof(num), stdin);

    printf("Integer: %d", atoi2(num));

    return 0;
}
