/*Q102: Write a Program to take a sorted array arr[]
 and an integer x as input, find the index (0-based)
 of the smallest element in arr[] that is
 greater than or equal to x and print it.
 This element is called the ceil of x.
 If such an element does not exist, print -1.
 Note: In case of multiple occurrences of ceil of x,
  return the index of the first occurrence.


Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/
#include <stdio.h>
int findCeilIndex(int arr[], int size, int x)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] >= x)
    {
      return i; // Return the index of the first occurrence of ceil
    }
  }
  return -1; // If no element is greater than or equal to x
}
int main()
{
  int n, x;
  printf("enter number of elements of array: ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    printf("enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }
  printf("enter the value of x: ");
  scanf("%d", &x);
  int result = findCeilIndex(arr, n, x);
  printf("Index of ceil of %d: %d\n", x, result);
  return 0;
}
