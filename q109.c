/*Q109: Write a program to take an integer array arr
and an integer k as inputs.
Print the maximum sum of all the subarrays of size k.
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400
*/
#include <stdio.h>
int maxSumOfSubarrays(int arr[], int size, int k)
{
    int maxSum = 0;
    for (int i = 0; i <= size - k; i++)
    {
        int currentSum = 0;
        for (int j = 0; j < k; j++)
        {
            currentSum += arr[i + j];
        }
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }
    return maxSum;
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
    int result = maxSumOfSubarrays(arr, n, k);
    printf("Maximum sum of subarrays of size %d: %d\n", k, result);
    return 0;
}
