/*Q100: Print all sub-strings of a string.
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("enter a string: ");
    scanf("%49s", str);
    int length = strlen(str);
    printf("Sub-strings are:\n");
    for (int i = 0; i < length; i++) // starting index
    {
        for (int j = i; j < length; j++) // ending index
        {
            for (int k = i; k <= j; k++) // print characters from starting to ending index
            {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    return 0;
}