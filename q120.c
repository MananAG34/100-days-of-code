/*Q120: Write a program to take a string input. Change it to sentence case.

Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>

int main()
{
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Capitalize first character if lowercase letter
    if (str[i] >= 'a' && str[i] <= 'z')
    {
        str[i] = str[i] - ('a' - 'A');
    }
    i++;

    // For the rest, capitalize if previous char is space, lowercase otherwise
    while (str[i] != '\0' && str[i] != '\n')
    {
        if (str[i - 1] == ' ' && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] = str[i] - ('a' - 'A');
        }
        else if (!(str[i - 1] == ' ') && (str[i] >= 'A' && str[i] <= 'Z'))
        {
            str[i] = str[i] + ('a' - 'A');
        }
        i++;
    }

    // Remove trailing newline from fgets if present
    if (i > 0 && str[i - 1] == '\n')
    {
        str[i - 1] = '\0';
    }

    printf("%s\n", str);

    return 0;
}
