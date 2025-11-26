#include <stdio.h>
int FACT(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * FACT(n - 1);
    }
}
int binomial(int n, int r)
{
    return FACT(n) / (FACT(r) * FACT(n - r));
}
int main()
{
    int n, r, result;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
    if (r > n || r < 0 || n < 0)
    {
        printf("Invalid input. Make sure 0 <= r <= n.\n");
    } else {
        printf("%d! = %d\n", n, FACT(n));
        printf("%d! = %d\n", r, FACT(r));
        result = binomial(n, r);
        printf("C(%d, %d) = %d\n", n, r, result);
    }
    return 0;
}