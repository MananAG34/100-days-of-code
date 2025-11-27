// Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

int main()
{
    int num, i;
    int binary[32], index = 0;

    scanf("%d", &num);

    if (num == 0)
    {
        printf("0\n");
        return 0;
    }

    // Store binary digits in an array
    while (num > 0)
    {
        binary[index] = num % 2;
        num /= 2;
        index++;
    }

    // Print binary digits in reverse order
    for (i = index - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
