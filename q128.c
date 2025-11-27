/*Q128: Read a text file and count how many vowels
 and consonants are in the file.
 Ignore digits and special characters.

Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>

int main()
{
    char filename[100];
    FILE *file;
    int ch;
    int vowels = 0, consonants = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        // Convert uppercase to lowercase for uniformity
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + ('a' - 'A');
        }

        // Check if alphabetic
        if (ch >= 'a' && ch <= 'z')
        {
            // Check vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(file);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
