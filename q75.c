/*Q75: Add two matrices.
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>
int main()
{
    int rows1, cols1, rows2, cols2;
    printf("enter number of rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    int matrix1[rows1][cols1];
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            printf("enter element at position (%d,%d) of first matrix: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("enter number of rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    if (rows1 != rows2 || cols1 != cols2)
    {
        printf("Matrices cannot be added due to incompatible dimensions.\n");
        return 1;
    }
    int matrix2[rows2][cols2];
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("enter element at position (%d,%d) of second matrix: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    int sum[rows1][cols1];
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Sum of the two matrices is:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}