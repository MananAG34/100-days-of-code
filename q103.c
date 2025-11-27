/*Q103: Write a Program to take an array of integers as input,
calculate the pivot index of this array.
The pivot index is the index where the sum of all
the numbers strictly to the left of the index is equal
to the sum of all the numbers strictly to the index's right.
 If the index is on the left edge of the array, then
 the left sum is 0 because there are no elements to the left.
  This also applies to the right edge of the array.
  Print the leftmost pivot index.
  If no such index exists, print -1.
Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

Input 2:
nums = [1,2,3]
Output 2:
-1

Input 3:
nums = [2,1,-1]
Output 3:
0
*/
#include <stdio.h>
int findPivotIndex(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int leftSum = 0;
        int rightSum = 0;
        for (int j = 0; j < i; j++)
        {
            leftSum += arr[j];
        }
        for (int j = i + 1; j < size; j++)
        {
            rightSum += arr[j];
        }
        if (leftSum == rightSum)
        {
            return i; // Return the pivot index
        }
    }
    return -1; // If no pivot index is found
}
int main()
{
    int n;
    printf("enter number of elements of array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int result = findPivotIndex(arr, n);
    printf("Pivot Index: %d\n", result);
    return 0;
}