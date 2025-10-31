// 62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>
int main()
{
    int n;
    printf("no. of elements of array: ");
    scanf("%d", &n);
    int array[n], i;

    for (i = 0; i < n; i++)
    {
        printf("enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}