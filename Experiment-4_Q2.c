#include <stdio.h>
int gvar = 10;
int declocal() {
    int lvar = 5;
    printf("inside declocal(): lvar = %d, gvar = %d\n", lvar, gvar);
    return 0;
}

int main() {
    declocal();
    printf("outside function: gvar = %d\n", gvar);
    return 0;
}
