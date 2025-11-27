// Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba
*/

#include <stdio.h>
int main()
{
    char str[50];

    int j = 0;
    printf("enter a string in lowercase: ");
    scanf("%50s", str);
    for (int i = 0; str[i] <= '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[j];
            j--;
        }
    }
}