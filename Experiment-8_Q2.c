#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("Before: %p\n", p);
    p++;
    printf("After increment: %p\n", p);
    p--;
    printf("After decrement: %p\n", p);

    return 0;
}