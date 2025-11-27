/* Q69: Find the second largest element in an array.
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40
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
        printf("enter element %d: ", i);
        scanf("%d", &array[i]);
    }
    int largest, second_largest;
    if (array[0] > array[1])
    {
        largest = array[0];
        second_largest = array[1];
    }
    else
    {
        largest = array[1];
        second_largest = array[0];
    }
    for (int i = 2; i < n; i++)
    {
        if (array[i] > largest)
        {
            second_largest = largest;
            largest = array[i];
        }
        else if (array[i] > second_largest && array[i] != largest)
        {
            second_largest = array[i];
        }
    }
    printf("second largest element is %d \n", second_largest);
    return 0;
}
