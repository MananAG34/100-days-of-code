/*Q93: Check if two strings are anagrams of each other.
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams
*/
#include <stdio.h>
#include <string.h>
int areAnagrams(char *str1, char *str2)
{
    int count[256] = {0}; // ASCII character set

    // If lengths are different, they cannot be anagrams
    if (strlen(str1) != strlen(str2))
    {
        return 0;
    }

    // Count frequency of each character in str1
    for (int i = 0; str1[i] != '\0'; i++)
    {
        count[(unsigned char)str1[i]]++;
    }

    // Decrease frequency based on characters in str2
    for (int i = 0; str2[i] != '\0'; i++)
    {
        count[(unsigned char)str2[i]]--;
    }

    // If all counts are zero, they are anagrams
    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str1[100], str2[100];
    printf("enter first string: ");
    scanf("%99s", str1);
    printf("enter second string: ");
    scanf("%99s", str2);
    if (areAnagrams(str1, str2))
    {
        printf("Anagrams\n");
    }
    else
    {
        printf("Not anagrams\n");
    }
    return 0;
}