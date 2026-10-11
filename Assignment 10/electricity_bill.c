#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid number of units.\n");
        return 1;
    }

    /* Example tariff slabs:
       First 100 units      : Rs. 1.50 per unit
       Next 100 units       : Rs. 2.50 per unit
       Next 100 units       : Rs. 4.00 per unit
       Above 300 units      : Rs. 6.00 per unit
    */

    if (units <= 100) {
        bill = units * 1.50;
    } else if (units <= 200) {
        bill = (100 * 1.50) + ((units - 100) * 2.50);
    } else if (units <= 300) {
        bill = (100 * 1.50) + (100 * 2.50)
             + ((units - 200) * 4.00);
    } else {
        bill = (100 * 1.50) + (100 * 2.50)
             + (100 * 4.00) + ((units - 300) * 6.00);
    }

    printf("Electricity Bill = Rs. %.2f\n", bill);

    return 0;
}
