// Find the maximum and minimum element in an array.
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of elements of array: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter %d element: ", i + 1);
        scanf("%d", &array[i]);
    }
    int max = array[0];
    int min = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    printf("max = %d , min = %d \n", max, min);
    return 0;
}