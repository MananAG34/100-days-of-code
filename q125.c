/*Q125: Open an existing file in append mode and
allow the user to enter a new line of text.
Append the text at the end without overwriting existing content.
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main()
{
    char filename[100];
    char text[200];

    printf("Enter filename to append text: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "a"); // open in append mode
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    getchar(); // consume leftover newline from previous input
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);

    fclose(file);

    printf("File updated successfully with appended text.\n");
    return 0;
}
