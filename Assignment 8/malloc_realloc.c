#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, newSize, i;
    int *arr, *temp;

    printf("Enter the initial number of elements: ");
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
    }

    printf("Enter the new size of the array: ");
    scanf("%d", &newSize);

    if (newSize < n) {
        printf("New size must be greater than or equal to the initial size.\n");
        free(arr);
        return 1;
    }

    temp = (int *)realloc(arr, newSize * sizeof(int));

    if (temp == NULL) {
        printf("Memory reallocation failed.\n");
        free(arr);
        return 1;
    }

    arr = temp;

    if (newSize > n) {
        printf("Enter %d new integers:\n", newSize - n);
        for (i = n; i < newSize; i++) {
            scanf("%d", &arr[i]);
        }
    }

    printf("All elements are:\n");
    for (i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
