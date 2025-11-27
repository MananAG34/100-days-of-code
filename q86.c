// Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
int main()
{
    char str[50];
    printf("enter a string: ");
    scanf("%49s", str);
    int i, length = 0, flag = 1;
    // calculate length of string
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    // check for palindrome
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        printf("Palindrome \n");
    }
    else
    {
        printf("Not palindrome \n");
    }
    return 0;
}