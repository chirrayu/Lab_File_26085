#include<stdio.h>
int main(){
    float bmi;
    printf("enter your body mass index: ");
    scanf("%f",&bmi);
    if (bmi <= 15)
    {
        printf("Starvation");
    }
    else if (bmi > 15.1 && bmi <= 17.5)
    {
        printf("Anorexic");
    }
    else if (bmi > 17.5 && bmi <= 18.5)
    {
        printf("Underweight");
    }
    else if (bmi > 18.5 && bmi <= 24.9)
    {
        printf("Ideal");
    }
    else if (bmi > 24.9 && bmi <= 25.9)
    {
        printf("Overweight");
    }
    else if (bmi > 25.9 && bmi <= 39.9)
    {
        printf("Obese");
    }
    else if (bmi >= 40)
    {
        printf("Morbidly Obese");
    }
}
