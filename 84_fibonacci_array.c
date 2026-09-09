#include <stdio.h>

void fibonacci(int n, int arr[]) {
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
}

int main() {
    int n;
    int arr[100];
    int i;

    printf("Enter number: ");
    scanf("%d", &n);

    fibonacci(n, arr);

    printf("Fibonacci sequence: ");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
