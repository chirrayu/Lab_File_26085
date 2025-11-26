#include <stdio.h>

int length(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

void REVERSE(char s[]) {
    int i = 0, j = length(s) - 1;
    while (i < j) {
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++;
        j--;
    }
}

int main() {
    char s[200];
    scanf("%s", s);
    REVERSE(s);
    printf("%s", s);
    return 0;
}