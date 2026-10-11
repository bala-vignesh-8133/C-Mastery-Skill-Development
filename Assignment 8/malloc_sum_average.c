#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;
    long long sum = 0;
    double average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (double)sum / n;

    printf("Sum = %lld\n", sum);
    printf("Average = %.2f\n", average);

    free(arr);
    return 0;
}
