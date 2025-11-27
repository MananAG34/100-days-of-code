/*Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>

void count(char *str, int *vowels, int *consonants, int *spaces, int *digits, int *special)
{
    *vowels = 0;
    *consonants = 0;
    *digits = 0;
    *spaces = 0;
    *special = 0;

    while (*str != '\0')
    {
        char ch = *str;
        if (ch >= '0' && ch <= '9')
        {
            (*digits)++;
        }
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            // Convert uppercase to lowercase for easier vowel check
            char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
            {
                (*vowels)++;
            }
            else
            {
                (*consonants)++;
            }
        }
        else if (ch == ' ')
        {
            (*spaces)++;
        }
        else if (ch != '\n' && ch != '\r')
        {
            // Count everything else except newline as special characters
            (*special)++;
        }
        str++;
    }
}

int main()
{
    char str[100];
    int vowels, consonants, digits, spaces, special;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    count(str, &vowels, &consonants, &spaces, &digits, &special);

    printf("Vowels: %d, Consonants: %d, Spaces: %d, Digits: %d, Special characters: %d\n",
           vowels, consonants, spaces, digits, special);

    return 0;
}
