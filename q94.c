/*Q94: Find the longest word in a sentence.
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char sentence[200];
    printf("enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    char longest[50] = "";
    char current[50];
    int maxLength = 0;
    int i = 0, j = 0;
    while (1)
    {
        // Extract a word
        j = 0;
        while (sentence[i] != ' ' && sentence[i] != '\0' && sentence[i] != '\n')
        {
            current[j++] = sentence[i++];
        }
        current[j] = '\0';

        // Check if the current word is the longest
        if (j > maxLength)
        {
            maxLength = j;
            strcpy(longest, current);
        }

        // If end of sentence, break
        if (sentence[i] == '\0' || sentence[i] == '\n')
        {
            break;
        }
        i++; // Move to the next character after space
    }
    printf("Longest word: %s\n", longest);
    return 0;
}