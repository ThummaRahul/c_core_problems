#include <stdio.h>

void mergeArrays(int a[], int n, int b[], int m, int c[]) {
    int i;

    for (i = 0; i < n; i++) {
        c[i] = a[i];
    }

    for (i = 0; i < m; i++) {
        c[n + i] = b[i];
    }
}

int main() {
    int a[50];
    int b[50];
    int c[100];
    int n;
    int m;
    int i;

    printf("Enter size of A: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of B: ");
    scanf("%d", &m);

    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    mergeArrays(a, n, b, m, c);

    printf("Merged array: ");

    for (i = 0; i < n + m; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
