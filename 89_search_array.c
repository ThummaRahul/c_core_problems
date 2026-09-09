#include <stdio.h>

int searchArray(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[100];
    int n;
    int key;
    int pos;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Search key: ");
    scanf("%d", &key);

    pos = searchArray(arr, n, key);

    if (pos != -1) {
        printf("Element found at index: %d", pos);
    } else {
        printf("Element not found");
    }

    return 0;
}
