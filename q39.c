// Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main()
{
    int num, product = 1, remainder, hasOdd = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        remainder = num % 10; // Get last digit
        if (remainder % 2 != 0)
        {
            product *= remainder; // Multiply to product if odd digit
            hasOdd = 1;
        }
        num = num / 10; // Remove last digit
    }
    if (!hasOdd)
    {
        product = 1; // If no odd digits, product is 1
    }
    printf("Product of odd digits is: %d\n", product);
    return 0;
}