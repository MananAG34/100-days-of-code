/*Q105: Write a program to take an integer array nums
of size n, and print the majority element.
The majority element is the element that appears
strictly more than ⌊n / 2⌋ times.
Print -1 if no such element exists.
 Note: Majority Element is not necessarily
 the element that is present most number of times.
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1
*/
#include <stdio.h>
int findMajorityElement(int arr[], int size)
{
    int majorityCount = size / 2;
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
        if (count > majorityCount)
        {
            return arr[i]; // Return the majority element
        }
    }
    return -1; // If no majority element is found
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
    int result = findMajorityElement(arr, n);
    printf("Majority element: %d\n", result);
    return 0;
}
