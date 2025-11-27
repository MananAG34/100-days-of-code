/*Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

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
    int is_distinct = 1; // assume diagonal elements are distinct
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j) // check only diagonal elements
            {
                for (int k = i + 1; k < rows; k++)
                {
                    if (matrix[i][j] == matrix[k][k])
                    {
                        is_distinct = 0; // found a duplicate
                        break;
                    }
                }
            }
            if (!is_distinct)
            {
                break;
            }
        }
        if (!is_distinct)
        {
            break;
        }
    }
    if (is_distinct)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}
