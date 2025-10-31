// Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("enter the value of n: ");
    scanf("%d", &n);
    // by using a for loop
    for (int i = 1; i <= n; i++)
    {
        sum += (2 * i - 1);
    }
    printf("sum: %d\n", sum);
    return 0;
}
// by using n*n formula
//     sum = n * n;
//     printf("%d\n", sum);
//     return 0;
