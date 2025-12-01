#include <stdio.h>

void change(int *n) {
    *n = 20;
}

int main() {
    int a = 5;
    change(&a);
    printf("Updated value: %d\n", a);
    return 0;
}
