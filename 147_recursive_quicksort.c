#include <stdio.h>

void quicksort(int a[], int left, int right) {
    int i = left;
    int j = right;
    int temp;
    int pivot = a[(left + right) / 2];

    while (i <= j) {
        while (a[i] < pivot) {
            i++;
        }

        while (a[j] > pivot) {
            j--;
        }

        if (i <= j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;

            i++;
            j--;
        }
    }

    if (left < j) {
        quicksort(a, left, j);
    }

    if (i < right) {
        quicksort(a, i, right);
    }
}

int main() {
    int a[100];
    int n;
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    quicksort(a, 0, n - 1);

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
