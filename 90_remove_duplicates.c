#include <stdio.h>

int removeDuplicates(int arr[], int size) {
    int i;
    int j;
    int k;

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                for (k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }

                size--;
                j--;
            }
        }
    }

    return size;
}

int main() {
    int arr[100];
    int n;
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    n = removeDuplicates(arr, n);

    printf("Array after removing duplicates: ");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
