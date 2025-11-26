#include <stdio.h>
int main()
{
    int n, i, num, count = 0;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers in the array:\n");
    for (i = 0; i < n; i++)
    {
        printf("enter element no. %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to find its frequency: ");
    scanf("%d", &num);
    for (i = 0; i < n; i++) 
    {
        if (arr[i] == num) 
        {
            count++;
        }
    }
    printf("The frequency of %d in the list is: %d\n", num, count);
    return 0;
}