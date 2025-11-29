// Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba
*/

#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);
    
    // Print in reverse without calculating length first
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    i--;  // Move to last character
    
    while (i >= 0) {
        printf("%c", str[i]);
        i--;
    }
    printf("\n");
    
    return 0;
}
