#include <stdio.h>
int main() {
    int m, n, p, q;
    printf("value of m in matrix a");
    scanf("%d", &m);
    printf("value of n in matrix a");
    scanf("%d", &n);
    int a[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("enter the element of %dX%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("==== matrix a ====\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("value of p in matrix b");
    scanf("%d", &p);
    printf("value of q in matrix b");
    scanf("%d", &q);
    if (n != p) {
        printf("Matrices are not compatible for multiplication");
        return 0;
    }
    int b[p][q];

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("enter the element of %dX%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("==== matrix b ====\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    int c[m][q];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("==== resultant matrix ====\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}