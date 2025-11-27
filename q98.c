/*Q98: Print initials of a name with the surname displayed in full.
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

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
    // Print initials of subsequent words except the last word
    int lastSpaceIndex = -1;
    for (int i = 0; i < length; i++)
    {
        if (name[i] == ' ')
        {
            lastSpaceIndex = i;
        }
    }
    for (int i = 1; i < lastSpaceIndex; i++)
    {
        if (name[i] == ' ' && i + 1 < lastSpaceIndex && name[i + 1] != ' ')
        {
            printf("%c.", name[i + 1]);
        }
    }
    // Print the last name in full
    if (lastSpaceIndex != -1 && lastSpaceIndex + 1 < length)
    {
        printf(" %s", &name[lastSpaceIndex + 1]);
    }
    printf("\n");
    return 0;
}