/*Q95: Check if one string is a rotation of another.
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation
*/
#include <stdio.h>
#include <string.h>
int isRotation(char *str1, char *str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths are not equal, str2 cannot be a rotation of str1
    if (len1 != len2)
    {
        return 0;
    }

    // Create a new string by concatenating str1 with itself
    char temp[2 * len1 + 1];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of the concatenated string
    if (strstr(temp, str2) != NULL)
    {
        return 1; // str2 is a rotation of str1
    }
    return 0; // str2 is not a rotation of str1
}
int main()
{
    char str1[100], str2[100];
    printf("enter first string: ");
    scanf("%99s", str1);
    printf("enter second string: ");
    scanf("%99s", str2);
    if (isRotation(str1, str2))
    {
        printf("Rotation\n");
    }
    else
    {
        printf("Not rotation\n");
    }
    return 0;
}
