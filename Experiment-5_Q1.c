#include <stdio.h>
int main()
{
    int a;
    printf("how many elements do you want in the 1d array");
    scanf("%d",&a);
    int list[a];
    for (int i = 0; i < a; i++)
    {
        printf("enter element no %d: ",i+1);
        scanf("%d",&list[i]);
    }
    printf("{");
    for (int i = 0; i < a; i++)
    {
        printf("%d",list[i]);
        if (i<a-1)
        {
            printf(", ");
        }
    }
    printf("}");
}