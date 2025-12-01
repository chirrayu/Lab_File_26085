#include <stdio.h>

struct emp {
    char name[100];
    int zip;
    struct emp* a;
};

int main() {
    struct emp e1, e2;

    printf("Enter name for employee 1: ");
    scanf("%s", e1.name);
    printf("Enter zip for employee 1: ");
    scanf("%d", &e1.zip);

    printf("Enter name for employee 2: ");
    scanf("%s", e2.name);
    printf("Enter zip for employee 2: ");
    scanf("%d", &e2.zip);
}