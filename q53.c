/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 9; i = i + 2)
    {
        for (int j = 1; j <= i; j = j + 1)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 7; i >= 1; i = i - 2)
    {
        for (int j = 1; j <= i; j = j + 1)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}