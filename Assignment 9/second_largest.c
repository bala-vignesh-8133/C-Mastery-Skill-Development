#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    int arr[100];
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2 || n > 100) {
        printf("Array must contain between 2 and 100 elements.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        printf("There is no distinct second-largest element.\n");
    else
        printf("Second-largest element = %d\n", secondLargest);

    return 0;
}
