/*Q78: Find the sum of main diagonal elements for a square matrix.
sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15
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
            if (i == j) // check for main diagonal elements
            {
                sum += matrix[i][j];
            }
        }
    }
    printf("sum of main diagonal elements is %d \n", sum);
    return 0;
}