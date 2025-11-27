/*Q110: Write a program to take an integer array arr
 and an integer k as inputs. The task is to
  find the maximum element in each subarray of size k
   moving from left to right. Print the maximum
 elements for each window separated by spaces as output.
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include <stdio.h>
void maxInSubarrays(int arr[], int size, int k, int result[])
{
    for (int i = 0; i <= size - k; i++)
    {
        int max = arr[i];
        for (int j = 1; j < k; j++)
        {
            if (arr[i + j] > max)
            {
                max = arr[i + j];
            }
        }
        result[i] = max;
    }
}
int main()
{
    int n, k;
    printf("enter number of elements of array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("enter the value of k: ");
    scanf("%d", &k);
    int result[n - k + 1];
    maxInSubarrays(arr, n, k, result);

    printf("Maximum elements in each subarray of size %d: ", k);
    for (int i = 0; i <= n - k; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}
