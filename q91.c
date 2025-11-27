/* Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn
*/
#include <stdio.h>
int isVowel(char c) {
    // Check if character is a vowel (case insensitive)
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}
int main()
{
    char str[50];
    printf("enter string: ");
    fgets(str, sizeof(str), stdin);
 int i = 0, j = 0;

    // Remove trailing newline if present
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
}
}