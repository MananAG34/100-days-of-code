/*Q72: Find the sum of all elements in a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21
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
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }
    }
    printf("Sum of all elements in the matrix is %d \n", sum);
}