// Find the sum of array elements.
#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of array: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter %d element: ", i + 1);
        scanf("%d", &array[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    printf("%d \n", sum);
    return 0;
}