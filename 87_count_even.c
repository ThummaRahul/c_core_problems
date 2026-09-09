#include <stdio.h>

int countEven(int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int arr[100];
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Number of even elements: %d",
           countEven(arr, n));

    return 0;
}
