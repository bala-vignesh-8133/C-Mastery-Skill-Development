#include <stdio.h>
int main() {
    int n, i, j = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        if (a[i] != 0) {
            a[j] = a[i];
            j++;
        }
    }
    while (j < n) {
        a[j] = 0;
        j++;
    }
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
