#include <stdio.h>
int main() {
    float length,width,area,perimeter;
    printf("enter length: ");
    scanf("%f",&length);
    printf("enter width :");
    scanf("%f",&width);
    area= length*width;
    perimeter= 2*(length+width);
    printf("given the length (%f) and width (%f) of the rectangle \nperimeter:%f \narea:%f ",length,width,perimeter,area);
}
