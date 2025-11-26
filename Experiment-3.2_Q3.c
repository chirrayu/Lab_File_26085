#include <stdio.h>
int main()
{
    int r = 3;
    int n = 1;

    for (int i = 1; i <= r; i++)
    {
        for (int j = i; j < r; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d", n++);
        }
        printf("\n");
    }
}
