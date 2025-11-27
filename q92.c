/*Q92: Find the first repeating lowercase alphabet in a string.
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
int main()
{
    char str[100];
    printf("enter string: ");
    scanf("%99s", str);
    int freq[26] = {0}; // frequency array for 'a' to 'z'
    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i] - 'a']++;
        if (freq[str[i] - 'a'] == 2)
        {
            printf("first repeating character: %c\n", str[i]);
            return 0;
        }
    }
    printf("No repeating character found\n");
    return 0;
}