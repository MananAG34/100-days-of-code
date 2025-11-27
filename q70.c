/*70: Rotate an array to the right by k positions.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3
*/
#include <stdio.h>
void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()

{
    int n, k;
    printf("enter number of elements of array: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d: ", i);
        scanf("%d", &array[i]);
    }
    printf("enter number of positions to rotate: ");
    scanf("%d", &k);
    reverse(array, 0, n - 1);
    reverse(array, 0, k - 1);
    reverse(array, k, n - 1);
    printf("Array after rotation: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
