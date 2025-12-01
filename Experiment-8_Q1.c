#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';

    int *ip = &a;
    float *fp = &b;
    char *cp = &c;

    printf("%d %p %d\n", a, ip, *ip);
    printf("%.1f %p %.1f\n", b, fp, *fp);
    printf("%c %p %c\n", c, cp, *cp);

    return 0;
}
