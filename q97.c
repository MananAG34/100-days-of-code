/*Q97: Print the initials of a name.
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    printf("enter full name: ");
    fgets(name, sizeof(name), stdin);
    int length = strlen(name);
    // Print the first initial
    if (length > 0 && name[0] != ' ')
    {
        printf("%c.", name[0]);
    }
    // Print initials of subsequent words
    for (int i = 1; i < length; i++)
    {
        if (name[i] == ' ' && i + 1 < length && name[i + 1] != ' ')
        {
            printf("%c.", name[i + 1]);
        }
    }
    printf("\n");
    return 0;
}
