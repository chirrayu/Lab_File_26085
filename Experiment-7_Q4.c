#include <stdio.h>

union address {
    char name[100];
    char hostel[100];
    char city[100];
    char state[100];
    char zip[20];
};

int main() {
    union address a;
    scanf("%s", a.hostel);
    printf("%s", a.hostel);
    return 0;
}
