#include <stdio.h>

int stack[100];
int top = -1;

void push(int x) {
    if (top < 99) {
        top++;
        stack[top] = x;
    }
}

int pop(void) {
    if (top >= 0) {
        return stack[top--];
    }

    return -1;
}

int main() {
    char command;
    int value;

    printf("Commands: p = push, o = pop, q = quit\n");

    while (1) {
        scanf(" %c", &command);

        if (command == 'p') {
            scanf("%d", &value);
            push(value);
        } else if (command == 'o') {
            value = pop();

            if (value != -1) {
                printf("Popped: %d\n", value);
            } else {
                printf("Stack empty\n");
            }
        } else if (command == 'q') {
            break;
        } else {
            printf("Invalid command\n");
        }
    }

    return 0;
}
