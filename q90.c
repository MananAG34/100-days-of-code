/*Q90: Toggle case of each character in a string.

Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>

int main()
{
    char str[50]; // assuming max length 999
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + ('a' - 'A'); // uppercase to lowercase
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A'); // lowercase to uppercase
        }
    }

    printf("%s", str);

    return 0;
}
