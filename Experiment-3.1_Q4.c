#include <stdio.h>
int main() {
    int y;
    int ly, ny, s, d;
    printf("Enter year: ");
    scanf("%d", &y);
    ly = ((y - 1) / 4) - ((y - 1) / 100) + ((y - 1) / 400);
    ny = (y - 1) - ly;
    s = (ny + 2 * ly) % 7;
    d = s;
    printf("On 01/01/%d it was ", y);
    if (d == 0)
    {
        printf("Monday\n");
    }
    else if (d == 1)
    {
        printf("Tuesday\n");
    }
    else if (d == 2)
    {
        printf("Wednesday\n");
    }
    else if (d == 3)
    {
        printf("Thursday\n");
    }
    else if (d == 4)
    {
        printf("Friday\n");
    }
    else if (d == 5)
    {
        printf("Saturday\n");
    }
    else
    {
        printf("Sunday\n");
    }
    return 0;
}
