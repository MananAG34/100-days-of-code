/*Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>
int main()
{
    int rows, cols;
    printf("enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("enter element at position (%d,%d): ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    int row_sums[rows];
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }
        row_sums[i] = sum;
    }
    printf("Sum of each row: ");
    for (int i = 0; i < rows; i++)
    {
        printf("%d ", row_sums[i]);
    }
    printf("\n");
}