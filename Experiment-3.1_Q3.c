#include <stdio.h>
int main() {
    float x1, y1, x2, y2, x3, y3;
    float area;
    printf("Enter coordinates of x1: ");
    scanf("%f",&x1);
    printf("Enter coordinates of x2: ");
    scanf("%f",&x2);
    printf("Enter coordinates of x3: ");
    scanf("%f",&x3);
    printf("Enter coordinates of y1: ");
    scanf("%f",&y1);
    printf("Enter coordinates of y2: ");
    scanf("%f",&y2);
    printf("Enter coordinates of y3: ");
    scanf("%f",&y3);
    area = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;
    if (area == 0)
    {
        printf("The points are Collinear.\n");
    }
    else
    {
        printf("The points are NOT Collinear.\n");
    }
}
