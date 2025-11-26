#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter the number you want to print the table of: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; ++i)
    {
        m = n * i;
        printf("%d X %d = %d\n", n, i, m);
    }
    return 0;
}
