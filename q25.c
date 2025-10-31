// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3 */
#include <stdio.h>
int main()
{
    char operator;
    float num1, num2;
    float answer = 0;
    printf("enter two numbers and an operator (+, -, *, /, %%): ");
    scanf("%f %f %c", &num1, &num2, &operator);

    switch (operator)
    {
    case '+':
        answer = num1 + num2;
        printf("%.2f \n", answer);
        break;
    case '-':
        answer = num1 - num2;
        printf("%.2f \n", answer);
        break;
    case '*':
        answer = num1 * num2;
        printf("%.2f \n", answer);
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Division by zero error \n");
        }
        else
        {
            answer = num1 / num2;
            printf("%.2f \n", answer);
        }
        break;
    case '%':
        if ((int)num2 == 0)
        {
            printf("Division by zero error \n");
        }
        else
        {
            answer = (int)num1 % (int)num2;
            printf("%.2f \n", answer);
            break;
        }
    default:
        printf("invalid operator \n");
    }
    return 0;
}
