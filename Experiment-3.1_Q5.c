#include <stdio.h>
int main() {
    int l1, b1, l2, b2, l3, b3;
    int p1, p2, p3;
    int max, rect;
    printf("Enter length of Rectangle 1: ");
    scanf("%d",&l1);
    printf("Enter breadth of Rectangle 1: ");
    scanf("%d",&b1);
    printf("Enter length of Rectangle 2: ");
    scanf("%d",&l2);
    printf("Enter breadth of Rectangle 2: ");
    scanf("%d",&b2);
    printf("Enter length of Rectangle 3: ");
    scanf("%d",&l3);
    printf("Enter breadth of Rectangle 3: ");
    scanf("%d",&b3);
    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);
    max = (p1 > p2) ? p1 : p2;
    rect = (p1 > p2) ? 1 : 2;
    max = (max > p3) ? max : p3;
    rect = (max > p3) ? rect : 3;
    printf("\nPerimeter of Rectangle 1 = %d\n", p1);
    printf("\nPerimeter of Rectangle 2 = %d\n", p2);
    printf("\nPerimeter of Rectangle 3 = %d\n", p3);
    printf("\n\nRectangle %d has the highest perimeter = %d\n", rect, max);
}
