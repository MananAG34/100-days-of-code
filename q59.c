/* Q59: Count even and odd numbers in an array.
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of elements of array: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter %d element: ", i + 1);
        scanf("%d", &array[i]);
    }
    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            even_count += 1;
        }
        else
        {
            odd_count += 1;
        }
    }
    printf("Even= %d and Odd= %d \n", even_count, odd_count);
    return 0;
}