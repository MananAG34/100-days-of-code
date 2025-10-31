// 61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1
*/
#include <stdio.h>
int main()
{
    int n;
    printf("no. of elements of array: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    int x;
    printf("enter element to search for: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (array[i] == x)
        {
            printf("found at index %d \n ", i);
        }
    }
    return 0;
}