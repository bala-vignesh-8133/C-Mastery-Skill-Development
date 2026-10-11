#include <stdio.h>

int main() {
    int limit, num, temp, digit;
    int digits, sum, i, power;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    if (limit < 1) {
        printf("Please enter a limit greater than or equal to 1.\n");
        return 1;
    }

    printf("Armstrong numbers between 1 and %d are:\n", limit);

    for (num = 1; num <= limit; num++) {
        temp = num;
        digits = 0;

        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;
        sum = 0;

        while (temp != 0) {
            digit = temp % 10;
            power = 1;

            for (i = 0; i < digits; i++) {
                power *= digit;
            }

            sum += power;
            temp /= 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
