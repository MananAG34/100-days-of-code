/* Q139: Show that enums store integers by printing assigned values.
Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/
#include <stdio.h>
enum outcome
{
    SUCCESS = 0,
    FAILURE,
    TIMEOUT
};

int main()
{
    printf("Sucess=%d ", SUCCESS);
    printf("FAILURE=%d ", FAILURE);
    printf("TIMEOUT=%d \n", TIMEOUT);
    return 0;
}