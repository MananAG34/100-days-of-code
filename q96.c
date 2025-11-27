/*Q96: Reverse each word in a sentence without changing the word order.
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc
*/
#include <stdio.h>
#include <string.h>
void reverseWord(char *start, char *end)
{
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main()
{
    char sentence[200];
    printf("enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    char *word_start = sentence;
    char *temp = sentence; // temp is for traversing the sentence
    while (*temp != '\0')
    {
        if (*temp == ' ' || *temp == '\n') // when we reach a space or end of line
        {
            reverseWord(word_start, temp - 1); // reverse the current word
            word_start = temp + 1;             // move to the start of the next word
        }
        temp++;
    }
    // Reverse the last word
    reverseWord(word_start, temp - 1);
    printf("Reversed sentence: %s", sentence);
    return 0;
}