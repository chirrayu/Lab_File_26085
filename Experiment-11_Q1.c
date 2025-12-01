//Write a program to apply bitwise OR, AND and NOT operators on bit level.
#include <stdio.h>
int main()
{
    int n1, n2;
    printf("enter the no. of element you want in the list a");
    scanf("%d",n1);
    printf("enter the no. of element you want in the list b");
    scanf("%d",n1);
    int a[n1],b[n2];
    //list making
    for (int i = 0; i < n1; i++)
    {
        scanf(" element no %d",&a[i]);
        printf("\n");
    }
    for (int i = 0; i < n2; i++)
    {
        scanf("%d",&b[i]);
        printf("\n");
    }
    //list printing
    for (int i = 0; i < n1; i++)
    {
        printf("%d",a[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        printf("%d",b[i]);
    }
    //list comparing
    if (n1>n2)
    {
      printf("list is not equal");
      return 0;
    }
    else if (n1<n2)
    {
      printf("list is not equal");
      return 0;
    }
    else if (n1=n2)
    {
        for (int i;n1>i;i++)
        {
            
        }
    }
}

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBitwise AND (a & b) = %d", a & b);
    printf("\nBitwise OR  (a | b) = %d", a | b);
    printf("\nBitwise NOT  (a ~ b) = %d", a | b);
    return 0;
}