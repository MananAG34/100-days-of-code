// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

// Function to calculate 10^power
int power10(int power)
{
    int result = 1;
    for (int i = 0; i < power; i++)
    {
        result *= 10;
    }
    return result;
}

// Function to count digits in a number
int countDigits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

// Function to get digit at specific position (1-based from right)
int getDigit(int n, int pos)
{
    int pow10 = 1;
    for (int i = 1; i < pos; i++)
    {
        pow10 *= 10;
    }
    return (n / pow10) % 10;
}

int main()
{
    int num;
    scanf("%d", &num);

        if (num < 10)
    {
        printf("%d\n", num);
        return 0;
    }

    int totalDigits = countDigits(num);
    int firstDigit = num / power10(totalDigits - 1); // First digit
    int lastDigit = num % 10;                        // Last digit

    // Remove first and last digits
    int middle = num % power10(totalDigits - 1);
    middle /= 10;

    // Construct new number: last + middle + first
    int result = lastDigit * power10(totalDigits - 1) + middle * 10 + firstDigit;

    printf("%d\n", result);
    return 0;
}
