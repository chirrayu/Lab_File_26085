#include <stdio.h>
int main(){
    float an1, an2, an3;
    printf("enter 1st angle of triangle: ");
    scanf("%f",&an1);
    printf("enter 2nd angle of triangle: ");
    scanf("%f",&an2);
    printf("enter 3rd angle of triangle: ");
    scanf("%f",&an3);
    if ((an1+an2+an3)==180)
    {
        if (an1==an2 && an2==an3){
            printf("triangle is equilateral");
        }
        else if ((an1==90||an2==90||an3==90)&&(an1==an2||an2==an3||an1==an3)){
            printf("triangle is right angle isosceles");
        }
        else if (an1==an2||an2==an3||an1==an3){
            printf("triangle is isosceles");
        }
        else if (an1==90||an2==90||an3==90){
            printf("triangle is right angle");
        }
        else if (an1>90||an2>90||an3>90){
            printf("triangle is obtuse angle");
        }
        else{
            printf("triangle is scalene");
        }
    }
    else
    {
        printf("not a triangle");
    }
}
