#include <stdio.h>
int main()
{
    int p=0;
    int n=0;
    int z=0;
    int a;
    printf("how many elements do you want in the 1d array");
    scanf("%d",&a);
    int list[a];
    for (int i = 0; i < a; i++)
    {
        printf("enter element no %d: ",i+1);
        scanf("%d",&list[i]);
    }
    printf("this is the array you made");
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
    printf("\n");
    for (int i = 0;i < a; i++)
    {
        if (list[i]>0)
        {
            printf("%d from the list is positive",list[i]);
            p++;
        }
        else if (list[i]<0)
        {
            printf("%d from the list is negative",list[i]);
            n++;
        }
        else if (list[i]==0)
        {
            printf("%d from the list is zero",list[i]);
            z++;
        }
        printf("\n");
    }
    printf("there are total\n%d postive no\n%d negative no\n%d zero no\n",p,n,z);
}