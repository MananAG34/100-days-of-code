// Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
int main()
{
    int n;
    printf("no. of elements of array: ");
    scanf("%d", &n);
    int array[n], i;

    for (i = 0; i < n; i++)
    {
        printf("enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    int k;
    printf("no. of elements of array 2: ");
    scanf("%d", &k);
    int array2[k];
    for (i = 0; i < k; i++)
    {
        printf("enter element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }
    int merged_array[n + k];
    for (i = 0; i < n; i++)
    {
        merged_array[i] = array[i];
    }
    for (i = 0; i < k; i++)
    {
        merged_array[n + i] = array2[i];
    }
    for (i = 0; i < n + k; i++)
    {
        printf("%d ", merged_array[i]);
    }
    printf("\n");
    return 0;
}