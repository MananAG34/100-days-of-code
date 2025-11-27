/*Q40: Write a program to find the 1’s complement
of a binary number and print it.

Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char binary[100];

    // Read binary input
    scanf("%s", binary);

    int len = strlen(binary);

    // Compute 1's complement by flipping each bit
    for (int i = 0; i < len; i++)
    {
        if (binary[i] == '1')
        {
            binary[i] = '0';
        }
        else if (binary[i] == '0')
        {
            binary[i] = '1';
        }
    }

    // Print the result
    printf("%s\n", binary);

    return 0;
}
