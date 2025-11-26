#include <stdio.h>

int main() {
    int t, n, p = 0, neg = 0, z = 0;
    printf("How many numbers do you want to enter? ");
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &n);
        if (n > 0) {
            p++;
        }
        else if (n < 0) {
            neg++;
        }
        else {
            z++;
        }
    }
    printf("\nPositive: %d", p);
    printf("\nNegative: %d", neg);
    printf("\nZero: %d", z);
    return 0;
}
