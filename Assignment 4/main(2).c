#include <stdio.h>
int main() {
    int n, m, i, j, found;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);

    int b[m];

    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < n; i++) {
        found = 0;

        for (j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                found = 1;
                break;
            }
        }

        if (found)
            printf("%d ", a[i]);
    }

    return 0;
}
