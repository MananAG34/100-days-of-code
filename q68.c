// Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter number of elements of array: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the element %d: ", i);
        scanf("%d", &array[i]);
    }
    int pos;
    printf("enter position to delete element: ");
    scanf("%d", &pos);
    // shift elements to the left from the position
    for (int i = pos; i < n - 1; i++)
    {
        array[i] = array[i + 1];
    }
    printf("Array after deletion: ");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
