///Problem 10 – Electric power distribution charges

#include <stdio.h>
int main() {
    int custNo, units;
    float charges;

    printf("Enter CUSTOMER NO. and UNITS consumed\n");
    scanf("%d", &custNo);
    scanf("%d", &units);

    if (units <= 200) {
        charges = units * 0.50;
    } else if (units <= 400) {
        charges = 100 + (units - 200) * 0.65;
    } else if (units <= 600) {
        charges = 230 + (units - 400) * 0.80;
    } else {
        charges = 390 + (units - 600) * 1.00;
    }

    printf("\n\nCustomer No: %d:\n Charges = %.2f\n\n", custNo, charges);

    return 0;
}
