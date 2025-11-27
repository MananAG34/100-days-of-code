/*Q76: Check if a matrix is symmetric.
sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

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
    int is_symmetric = 1; // assume matrix is symmetric
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                is_symmetric = 0; // matrix is not symmetric
                break;
            }
        }
        if (!is_symmetric)
        {
            break;
        }
    }

    if (is_symmetric)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}