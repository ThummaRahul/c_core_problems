#include <stdio.h>

int stack[100];
int top = -1;

void push(int x) {
    if (top < 99) {
        top++;
        stack[top] = x;
    }
}

int pop() {
    if (top >= 0) {
        return stack[top--];
    }

    return -1;
}

int main() {
    push(10);
    push(20);

    printf("%d\n", pop());
    printf("%d\n", pop());

    return 0;
}
