/*Q127: Write a program that reads text from input.txt,
converts all lowercase letters to uppercase,
and writes the result to output.txt.
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING
*/
#include <stdio.h>

int main()
{
    char inputFilename[100], outputFilename[100];
    FILE *inputFile, *outputFile;
    int ch;

    printf("Enter input filename: ");
    scanf("%s", inputFilename);

    printf("Enter output filename: ");
    scanf("%s", outputFilename);

    inputFile = fopen(inputFilename, "r");
    if (inputFile == NULL)
    {
        printf("Error opening input file!\n");
        return 1;
    }

    outputFile = fopen(outputFilename, "w");
    if (outputFile == NULL)
    {
        printf("Error opening output file!\n");
        fclose(inputFile);
        return 1;
    }

    while ((ch = fgetc(inputFile)) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - ('a' - 'A');
        }
        fputc(ch, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Text converted to uppercase and written to %s\n", outputFilename);

    return 0;
}
