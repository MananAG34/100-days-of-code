//67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include<stdio.h>
int main ()
{
    int n;
    printf("no. of elements of array: ");
    scanf("%d", &n);
    int array[n+1]; // create array of size n+1 to accommodate new element
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    int pos, element;
    printf("enter position and element to insert: ");
    scanf("%d %d", &pos, &element);
    // shift elements to the right from the position
    for (int i = n; i >= pos; i--)
    {
        array[i] = array[i - 1];
    }
    array[pos - 1] = element; // insert the new element at the given position
    printf("Array after insertion: ");
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;

}