#include <stdio.h>

int FIBO(int n) {
    if (n <= 1) return n;
    return FIBO(n - 1) + FIBO(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%d ", FIBO(i));
    }
    return 0;
}
