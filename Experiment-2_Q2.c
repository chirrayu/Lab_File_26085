#include <stdio.h>
int main() {
    int F,C;
    printf("enter temperature in celsius: ");
    scanf("%d",&C);
    F = (C * 9/5) + 32;
    printf("temperature in Fahrenheit: %d",F);
}
