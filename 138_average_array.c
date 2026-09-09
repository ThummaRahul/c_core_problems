#include <stdio.h>

double average(double arr[], int n) {
    double sum = 0;
    int i;

    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum / n;
}

int main() {
    double arr[100];
    int n;
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }

    printf("Average = %.2f", average(arr, n));

    return 0;
}
