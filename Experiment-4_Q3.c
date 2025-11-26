#include <stdio.h>
int declocal() {
    int lvar = 10;
    printf("Outside inner block: lvar = %d\n", lvar);
    {
        int lvar = 20;
        printf("Inside inner block 1: lvar = %d\n", lvar);
        {
            int lvar = 30;
            printf("Inside inner block 2: lvar = %d\n", lvar);
        }
        printf("Back to inner block 1: lvar = %d\n", lvar);
    }
    printf("Back to outer block: lvar = %d\n", lvar);
    return 0;
}

int main() {
    declocal();
    return 0;
}
