/* Q136: Use enum to represent menu choices
(ADD, SUBTRACT, MULTIPLY) and
 perform operations using switch.
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>

enum Operation
{
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    char op[10];
    int num1, num2, result;
    enum Operation operation;

    printf("Enter operation (ADD, SUBTRACT, MULTIPLY) and two integers: ");
    scanf("%s %d %d", op, &num1, &num2);

    // Convert operation string to enum
    if (op[0] == 'A' && op[1] == 'D' && op[2] == 'D' && op[3] == '\0')
    {
        operation = ADD;
    }
    else if (op[0] == 'S' && op[1] == 'U' && op[2] == 'B' && op[3] == 'T' &&
             op[4] == 'R' && op[5] == 'A' && op[6] == 'C' && op[7] == 'T' && op[8] == '\0')
    {
        operation = SUBTRACT;
    }
    else if (op[0] == 'M' && op[1] == 'U' && op[2] == 'L' && op[3] == 'T' &&
             op[4] == 'I' && op[5] == 'P' && op[6] == 'L' && op[7] == 'Y' && op[8] == '\0')
    {
        operation = MULTIPLY;
    }
    else
    {
        printf("Invalid operation\n");
        return 1;
    }

    switch (operation)
    {
    case ADD:
        result = num1 + num2;
        break;
    case SUBTRACT:
        result = num1 - num2;
        break;
    case MULTIPLY:
        result = num1 * num2;
        break;
    default:
        printf("Unknown operation\n");
        return 1;
    }

    printf("%d\n", result);

    return 0;
}
