// Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>
int main()
{
    char str[50];
    printf("enter string with lower characters: ");
    scanf("%99s", str);
    int count_v = 0, count_c = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'e')
        {
            count_v++;
        }
        else
        {
            count_c++;
        }
    }
    printf("vowels: %d , consonents: %d \n", count_v, count_c);
    return 0;
}