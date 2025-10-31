// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, count[10] = {0};
    long int n;
    printf("enter n: ");
    scanf("%ld", &n);
    while (n > 0)
    {
        int digit = n % 10;
        for (int i = 0; i < 10; i++)
        {
            if (array[i] == digit)
            {
                count[digit] += 1;
            }
        }
        n /= 10;
    }
    int max = 0;
    int number;
    for (int i = 0; i < 10; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            number = i;
        }
    }
    printf("highest occuring number: %d \n", number);
    return 0;
}