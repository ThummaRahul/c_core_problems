#include <stdio.h>

int stack[100];
int top = -1;

void push(int x) {
    top++;
    stack[top] = x;
}

int pop() {
    int x;

    x = stack[top];
    top--;

    return x;
}

int main() {
    push(5);
    push(3);

    push(pop() + pop());

    printf("Result: %d", pop());

    return 0;
}
