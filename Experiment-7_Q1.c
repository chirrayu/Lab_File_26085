#include <stdio.h>

struct complex {
    float r;
    float i;
};

int main() {
    struct complex a, b, sum, diff;
    scanf("%f %f", &a.r, &a.i);
    scanf("%f %f", &b.r, &b.i);
    sum.r = a.r + b.r;
    sum.i = a.i + b.i;
    diff.r = a.r - b.r;
    diff.i = a.i - b.i;
    printf("%f + %fi\n", sum.r, sum.i);
    printf("%f + %fi\n", diff.r, diff.i);
    return 0;
}
