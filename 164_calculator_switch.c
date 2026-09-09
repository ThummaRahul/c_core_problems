#include <stdio.h>

int main() {
    int a, b;
    char op;

    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+': {
            printf("%d", a + b);
            break;
        }

        case '-': {
            printf("%d", a - b);
            break;
        }

        case '*': {
            printf("%d", a * b);
            break;
        }

        case '/': {
            if (b != 0) {
                printf("%d", a / b);
            } else {
                printf("Cannot divide by zero");
            }

            break;
        }

        case '%': {
            if (b != 0) {
                printf("%d", a % b);
            } else {
                printf("Cannot divide by zero");
            }

            break;
        }

        default: {
            printf("Invalid operator");
            break;
        }
    }

    return 0;
}
