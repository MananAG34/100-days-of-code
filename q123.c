/*Q123: Read a text file and count the total number of characters,
 words, and lines. A word is defined as a sequence
  of non-space characters separated by spaces or newlines.
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>

int main()
{
    char filename[100];
    FILE *file;

    printf("Enter file name: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    int characters = 0, words = 0, lines = 0;
    int ch;
    int inWord = 0;

    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        if (ch == '\n')
        {
            lines++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            if (inWord)
            {
                words++;
                inWord = 0;
            }
        }
        else
        {
            inWord = 1;
        }
    }

    if (inWord)
    {
        words++;
    }

    if (characters > 0 && lines == 0)
    {
        lines = 1;
    }

    fclose(file);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
